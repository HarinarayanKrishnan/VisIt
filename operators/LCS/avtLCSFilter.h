/*****************************************************************************
*
* Copyright (c) 2000 - 2015, Lawrence Livermore National Security, LLC
* Produced at the Lawrence Livermore National Laboratory
* LLNL-CODE-442911
* All rights reserved.
*
* This file is  part of VisIt. For  details, see https://visit.llnl.gov/.  The
* full copyright notice is contained in the file COPYRIGHT located at the root
* of the VisIt distribution or at http://www.llnl.gov/visit/copyright.html.
*
* Redistribution  and  use  in  source  and  binary  forms,  with  or  without
* modification, are permitted provided that the following conditions are met:
*
*  - Redistributions of  source code must  retain the above  copyright notice,
*    this list of conditions and the disclaimer below.
*  - Redistributions in binary form must reproduce the above copyright notice,
*    this  list of  conditions  and  the  disclaimer (as noted below)  in  the
*    documentation and/or other materials provided with the distribution.
*  - Neither the name of  the LLNS/LLNL nor the names of  its contributors may
*    be used to endorse or promote products derived from this software without
*    specific prior written permission.
*
* THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT  HOLDERS AND CONTRIBUTORS "AS IS"
* AND ANY EXPRESS OR  IMPLIED WARRANTIES, INCLUDING,  BUT NOT  LIMITED TO, THE
* IMPLIED WARRANTIES OF MERCHANTABILITY AND  FITNESS FOR A PARTICULAR  PURPOSE
* ARE  DISCLAIMED. IN  NO EVENT  SHALL LAWRENCE  LIVERMORE NATIONAL  SECURITY,
* LLC, THE  U.S.  DEPARTMENT OF  ENERGY  OR  CONTRIBUTORS BE  LIABLE  FOR  ANY
* DIRECT,  INDIRECT,   INCIDENTAL,   SPECIAL,   EXEMPLARY,  OR   CONSEQUENTIAL
* DAMAGES (INCLUDING, BUT NOT  LIMITED TO, PROCUREMENT OF  SUBSTITUTE GOODS OR
* SERVICES; LOSS OF  USE, DATA, OR PROFITS; OR  BUSINESS INTERRUPTION) HOWEVER
* CAUSED  AND  ON  ANY  THEORY  OF  LIABILITY,  WHETHER  IN  CONTRACT,  STRICT
* LIABILITY, OR TORT  (INCLUDING NEGLIGENCE OR OTHERWISE)  ARISING IN ANY  WAY
* OUT OF THE  USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH
* DAMAGE.
*
*****************************************************************************/

// ************************************************************************* //
//  File: avtLCSFilter.h
// ************************************************************************* //

#ifndef AVT_LCS_FILTER_H
#define AVT_LCS_FILTER_H

/** header file for plugin development */
#include <avtPluginFilter.h>
/** header file for parallel integral curve system */
#include <avtPICSFilter.h>

/** included attributes for LCS */
#include <LCSAttributes.h>

#include <vector>

class vtkDataSet;


// ****************************************************************************
//  Class: avtLCSFilter
//
//  Purpose:
//      A plugin operator for LCS.
//
//  Programmer: hchilds -- generated by xml2avt
//  Creation:   Mon Jan 10 07:15:51 PDT 2011
//
// ****************************************************************************

class avtLCSFilter : public virtual avtPluginFilter, 
                      public virtual avtPICSFilter
{
  public:
    // default constructor
                         avtLCSFilter();
    // virtual destructor
    virtual             ~avtLCSFilter();
    // create filter
    static avtFilter    *Create();

    virtual const char  *GetType(void)  { return "avtLCSFilter"; }
    virtual const char  *GetDescription(void)
                             { return "Performing LCS"; }

    //turn off on demand processing, I cannot handle this functionality yet..
    virtual bool OperatingOnDemand(void) const { return false; }
    virtual bool CheckOnDemandViability(void) { return false; }

    /** virtual functions for avtPICSFilter */
    /** construct default integral curve */
    virtual avtIntegralCurve        *CreateIntegralCurve();
    /** construct integral curve given parameters */
    virtual avtIntegralCurve        *CreateIntegralCurve(
                      const avtIVPSolver* model,
                      avtIntegralCurve::Direction dir,
                      const double& t_start, //start time
                      const avtVector &p_start,//start pos
                      const avtVector &v_start,
                      long ID); //id

    /** Construct the initial locations to emanate integral curves */
    virtual std::vector<avtVector> GetInitialLocations();
    virtual std::vector<avtVector> GetInitialVelocities();
 
    /** type of communication between processors
      options include: RestoreSequence,LeaveOnCurrentProcessor, and 
             ReturnToOriginatingProcessor(NOT IMPLEMENTED) */
//    virtual CommunicationPattern GetCommunicationPattern()
//                { return LeaveOnCurrentProcessor; }
    virtual CommunicationPattern GetCommunicationPattern()
                { return ReturnToOriginatingProcessor; }

    /* Finalize The Output */
    virtual void CreateIntegralCurveOutput(
                    std::vector<avtIntegralCurve*> &);

    virtual avtContract_p   ModifyContract(avtContract_p);

    virtual void  PreExecute(void);
    virtual void  Execute(void);
    virtual bool  ContinueExecute();

    virtual void  SetAtts(const AttributeGroup*);
    virtual bool  Equivalent(const AttributeGroup*);

    virtual void  UpdateDataObjectInfo(void);

protected:
    virtual void  ReportWarnings(std::vector<avtIntegralCurve *> &ics);

    //helper functions
    // size_t         ComputeBoundsAndResolution(vtkDataSet* in_ds,
    //                                              double bounds[6],
    //                                              int resolution[3]);

    void GetInitialLocationsFromNativeMesh(avtDataTree_p);
    void GetInitialLocationsFromRectilinearGrid();

    // Single calculation methods for FTLE, FDLE, LIC, and similar methods
    void RectilinearGridSingleCalc( std::vector<avtIntegralCurve*> &ics );
    void NativeMeshSingleCalc( std::vector<avtIntegralCurve*> &ics );

    avtDataTree_p MultiBlockSingleCalc( avtDataTree_p,
                                        std::vector<avtIntegralCurve*> &,
                                        int &, double &, double & );
    vtkDataSet   *SingleBlockSingleCalc( vtkDataSet *, 
                                         std::vector<avtIntegralCurve*> &,
                                         int &, int, double &, double & );

    void ComputeLyapunovExponent( vtkDataArray* jacobian[3], 
                                  vtkDataArray* result );

    void ComputeEigenValues( vtkDataArray* jacobian[3], 
                              vtkDataArray* result );

    void ComputeEigenVectors( vtkDataArray* jacobian[3], 
                              vtkDataArray* result,
                              vtkDataArray* secondary );

    void ComputeLeftCauchyGreenTensor2D(double **j);
    void ComputeLeftCauchyGreenTensor3D(double **j);

    void ComputeRightCauchyGreenTensor2D(double **j);
    void ComputeRightCauchyGreenTensor3D(double **j);

    int Jacobi2D(double **j, double *w);
    int Jacobi2D(double **j, double *w, double **v);
    int Jacobi3D(double **a, double *w);
  
    // Iterative cacluation methods for FSLE, and similar methods
    bool RectilinearGridIterativeCalc( std::vector<avtIntegralCurve*> &ics );
    bool NativeMeshIterativeCalc( std::vector<avtIntegralCurve*> &ics );

    avtDataTree_p CreateIterativeCalcDataTree( avtDataTree_p );
    vtkDataSet*   CreateIterativeCalcDataSet();

    bool MultiBlockIterativeCalc( avtDataTree_p,
                                  std::vector<avtIntegralCurve*> &,
                                  int & );
    bool SingleBlockIterativeCalc( vtkDataSet *_ds,
                                   std::vector<avtIntegralCurve*> &,
                                   int & );
  
    void CreateMultiBlockIterativeCalcOutput( avtDataTree_p, avtDataTree_p,
                                              std::vector<avtIntegralCurve*> &,
                                              int &, double &, double &, int & );
    void CreateSingleBlockIterativeCalcOutput( vtkDataSet *, vtkDataSet *,
                                               std::vector<avtIntegralCurve*> &,
                                               int &, int, double &, double &,
                                               int & );

    void ComputeFSLE( vtkDataArray *component,
                      vtkDataArray *times,
                      vtkDataArray *exponents );

    double Value( int x, int y, int z, vtkDataArray *array,
                int x_max, int y_max, int z_max );
    void Increment( int x, int y, int z, vtkDataArray *mask,
                    int x_max, int y_max, int z_max );
    int  InBounds( int x, int y, int z,
                   int x_max, int y_max, int z_max );

    void CreateNativeMeshIterativeCalcOutput(std::vector<avtIntegralCurve*> &ics);
    void CreateRectilinearGridIterativeCalcOutput(std::vector<avtIntegralCurve*> &ics);

    // Additional methods
    std::string   CreateCacheString(void);
    avtDataTree_p GetCachedDataSet();
    avtDataTree_p GetCachedResampledDataSet();
    avtDataTree_p GetCachedNativeDataSet(avtDataTree_p);

    void          SetTermination(int maxSteps, 
                                 bool doDistance, double maxDistance, 
                                 bool doTime, double maxTime,
                                 bool doSize, double maxSize);

    void          SetVelocitySource(const double *v);

    void          IssueWarningForAdvection(bool v) 
                               { issueWarningForAdvection = v; };
    void          IssueWarningForBoundary(bool v) 
                               { issueWarningForBoundary = v; };
    void          IssueWarningForMaxStepsTermination(bool v) 
                               { issueWarningForMaxStepsTermination = v; };
    void          IssueWarningForStiffness(bool v) 
                               { issueWarningForStiffness = v; };
    void          IssueWarningForCriticalPoints(bool v, double speed) 
                               { issueWarningForCriticalPoints = v;
                                 criticalPointThreshold = speed; };

  protected:
    double timeCached;
    int    cycleCached;

    LCSAttributes   atts;
    bool            needsRecalculation;
    std::string     outVarRoot;
    std::string     outVarName;
    double          global_bounds[6];
    int             global_resolution[3];
    int             timeState;

    int cgTensor;
    int eigenComponent;

    int nDim;
    int auxIdx;
    int nAuxPts;
    double auxSpacing;

    int      numSteps;
    int      maxSteps;
    bool     doDistance;
    double   maxDistance;
    bool     doTime;
    double   maxTime;
    bool     doSize;
    double   maxSize;

    double    minSizeValue, maxSizeValue;

    bool      issueWarningForAdvection;
    bool      issueWarningForBoundary;
    bool      issueWarningForMaxStepsTermination;
    bool      issueWarningForStiffness;
    bool      issueWarningForCriticalPoints;
    double    criticalPointThreshold;

    avtVector seedVelocity;

    //input seed points..
    std::vector<avtVector> seedPoints;

    avtDataTree_p fsle_dt;
    vtkDataSet*   fsle_ds;
};

#endif
