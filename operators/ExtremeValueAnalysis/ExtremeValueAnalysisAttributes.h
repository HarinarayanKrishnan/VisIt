/*****************************************************************************
*
* Copyright (c) 2000 - 2013, Lawrence Livermore National Security, LLC
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

#ifndef EXTREMEVALUEANALYSISATTRIBUTES_H
#define EXTREMEVALUEANALYSISATTRIBUTES_H
#include <string>
#include <AttributeSubject.h>


// ****************************************************************************
// Class: ExtremeValueAnalysisAttributes
//
// Purpose:
//    Attributes for ExtremeValueAnalysis operator
//
// Notes:      Autogenerated by xml2atts.
//
// Programmer: xml2atts
// Creation:   omitted
//
// Modifications:
//   
// ****************************************************************************

class ExtremeValueAnalysisAttributes : public AttributeSubject
{
public:
    enum AggregationType
    {
        ANNUAL,
        SEASONAL,
        MONTHLY
    };
    enum MonthType
    {
        JANUARY,
        FEBRUARY,
        MARCH,
        APRIL,
        MAY,
        JUNE,
        JULY,
        AUGUST,
        SEPTEMBER,
        OCTOBER,
        NOVEMBER,
        DECEMBER
    };
    enum SeasonType
    {
        WINTER,
        SPRING,
        SUMMER,
        FALL
    };
    enum OptimizationType
    {
        NELDER_MEAD,
        BFGS
    };
    enum ExtremeType
    {
        MINIMA,
        MAXIMA
    };

    // These constructors are for objects of this class
    ExtremeValueAnalysisAttributes();
    ExtremeValueAnalysisAttributes(const ExtremeValueAnalysisAttributes &obj);
protected:
    // These constructors are for objects derived from this class
    ExtremeValueAnalysisAttributes(private_tmfs_t tmfs);
    ExtremeValueAnalysisAttributes(const ExtremeValueAnalysisAttributes &obj, private_tmfs_t tmfs);
public:
    virtual ~ExtremeValueAnalysisAttributes();

    virtual ExtremeValueAnalysisAttributes& operator = (const ExtremeValueAnalysisAttributes &obj);
    virtual bool operator == (const ExtremeValueAnalysisAttributes &obj) const;
    virtual bool operator != (const ExtremeValueAnalysisAttributes &obj) const;
private:
    void Init();
    void Copy(const ExtremeValueAnalysisAttributes &obj);
public:

    virtual const std::string TypeName() const;
    virtual bool CopyAttributes(const AttributeGroup *);
    virtual AttributeSubject *CreateCompatible(const std::string &) const;
    virtual AttributeSubject *NewInstance(bool) const;

    // Property selection methods
    virtual void SelectAll();
    void SelectReturnValues();

    // Property setting methods
    void SetDataYearBegin(int dataYearBegin_);
    void SetDataAnalysisYearRangeEnabled(bool dataAnalysisYearRangeEnabled_);
    void SetDataAnalysisYear1(int dataAnalysisYear1_);
    void SetDataAnalysisYear2(int dataAnalysisYear2_);
    void SetEnsemble(bool ensemble_);
    void SetNumEnsembles(int numEnsembles_);
    void SetDataScaling(double dataScaling_);
    void SetExtremeMethod(ExtremeType extremeMethod_);
    void SetOptimizationMethod(OptimizationType optimizationMethod_);
    void SetAggregation(AggregationType aggregation_);
    void SetCovariateModelScale(bool covariateModelScale_);
    void SetCovariateModelLocation(bool covariateModelLocation_);
    void SetCovariateModelShape(bool covariateModelShape_);
    void SetComputeReturnValues(bool computeReturnValues_);
    void SetReturnValues(const intVector &returnValues_);
    void SetComputeRVDifferences(bool computeRVDifferences_);
    void SetRvDifference1(int rvDifference1_);
    void SetRvDifference2(int rvDifference2_);
    void SetDisplayMonth(MonthType displayMonth_);
    void SetDisplaySeason(SeasonType displaySeason_);
    void SetComputeParamValues(bool computeParamValues_);
    void SetDumpData(bool dumpData_);
    void SetDumpDebug(bool dumpDebug_);

    // Property getting methods
    int             GetDataYearBegin() const;
    bool            GetDataAnalysisYearRangeEnabled() const;
    int             GetDataAnalysisYear1() const;
    int             GetDataAnalysisYear2() const;
    bool            GetEnsemble() const;
    int             GetNumEnsembles() const;
    double          GetDataScaling() const;
    ExtremeType     GetExtremeMethod() const;
    OptimizationType GetOptimizationMethod() const;
    AggregationType GetAggregation() const;
    bool            GetCovariateModelScale() const;
    bool            GetCovariateModelLocation() const;
    bool            GetCovariateModelShape() const;
    bool            GetComputeReturnValues() const;
    const intVector &GetReturnValues() const;
          intVector &GetReturnValues();
    bool            GetComputeRVDifferences() const;
    int             GetRvDifference1() const;
    int             GetRvDifference2() const;
    MonthType       GetDisplayMonth() const;
    SeasonType      GetDisplaySeason() const;
    bool            GetComputeParamValues() const;
    bool            GetDumpData() const;
    bool            GetDumpDebug() const;

    // Persistence methods
    virtual bool CreateNode(DataNode *node, bool completeSave, bool forceAdd);
    virtual void SetFromNode(DataNode *node);

    // Enum conversion functions
    static std::string AggregationType_ToString(AggregationType);
    static bool AggregationType_FromString(const std::string &, AggregationType &);
protected:
    static std::string AggregationType_ToString(int);
public:
    static std::string MonthType_ToString(MonthType);
    static bool MonthType_FromString(const std::string &, MonthType &);
protected:
    static std::string MonthType_ToString(int);
public:
    static std::string SeasonType_ToString(SeasonType);
    static bool SeasonType_FromString(const std::string &, SeasonType &);
protected:
    static std::string SeasonType_ToString(int);
public:
    static std::string OptimizationType_ToString(OptimizationType);
    static bool OptimizationType_FromString(const std::string &, OptimizationType &);
protected:
    static std::string OptimizationType_ToString(int);
public:
    static std::string ExtremeType_ToString(ExtremeType);
    static bool ExtremeType_FromString(const std::string &, ExtremeType &);
protected:
    static std::string ExtremeType_ToString(int);
public:

    // Keyframing methods
    virtual std::string               GetFieldName(int index) const;
    virtual AttributeGroup::FieldType GetFieldType(int index) const;
    virtual std::string               GetFieldTypeName(int index) const;
    virtual bool                      FieldsEqual(int index, const AttributeGroup *rhs) const;


    // IDs that can be used to identify fields in case statements
    enum {
        ID_dataYearBegin = 0,
        ID_dataAnalysisYearRangeEnabled,
        ID_dataAnalysisYear1,
        ID_dataAnalysisYear2,
        ID_ensemble,
        ID_numEnsembles,
        ID_dataScaling,
        ID_extremeMethod,
        ID_optimizationMethod,
        ID_aggregation,
        ID_covariateModelScale,
        ID_covariateModelLocation,
        ID_covariateModelShape,
        ID_computeReturnValues,
        ID_returnValues,
        ID_computeRVDifferences,
        ID_rvDifference1,
        ID_rvDifference2,
        ID_displayMonth,
        ID_displaySeason,
        ID_computeParamValues,
        ID_dumpData,
        ID_dumpDebug,
        ID__LAST
    };

private:
    int       dataYearBegin;
    bool      dataAnalysisYearRangeEnabled;
    int       dataAnalysisYear1;
    int       dataAnalysisYear2;
    bool      ensemble;
    int       numEnsembles;
    double    dataScaling;
    int       extremeMethod;
    int       optimizationMethod;
    int       aggregation;
    bool      covariateModelScale;
    bool      covariateModelLocation;
    bool      covariateModelShape;
    bool      computeReturnValues;
    intVector returnValues;
    bool      computeRVDifferences;
    int       rvDifference1;
    int       rvDifference2;
    int       displayMonth;
    int       displaySeason;
    bool      computeParamValues;
    bool      dumpData;
    bool      dumpDebug;

    // Static class format string for type map.
    static const char *TypeMapFormatString;
    static const private_tmfs_t TmfsStruct;
};
#define EXTREMEVALUEANALYSISATTRIBUTES_TMFS "ibiibidiiibbbbi*biiiibbb"

#endif
