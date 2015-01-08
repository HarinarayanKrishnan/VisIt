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

#ifndef POINCAREATTRIBUTES_H
#define POINCAREATTRIBUTES_H
#include <string>
#include <AttributeSubject.h>

#include <ColorAttribute.h>

// ****************************************************************************
// Class: PoincareAttributes
//
// Purpose:
//    Attributes for the Poincare plot
//
// Notes:      Autogenerated by xml2atts.
//
// Programmer: xml2atts
// Creation:   omitted
//
// Modifications:
//   
// ****************************************************************************

class PoincareAttributes : public AttributeSubject
{
public:
    enum SourceType
    {
        SpecifiedPoint,
        SpecifiedLine
    };
    enum FieldType
    {
        Default,
        FlashField,
        M3DC12DField,
        M3DC13DField,
        Nek5000Field,
        NIMRODField
    };
    enum IntegrationType
    {
        Euler,
        Leapfrog,
        DormandPrince,
        AdamsBashforth,
        RK4,
        M3DC12DIntegrator
    };
    enum SizeType
    {
        Absolute,
        FractionOfBBox
    };
    enum CoordinateSystem
    {
        Cartesian,
        Cylindrical
    };
    enum OverlapType
    {
        Raw,
        Remove,
        Merge,
        Smooth
    };
    enum ShowMeshType
    {
        Curves,
        Surfaces
    };
    enum PuncturePlaneType
    {
        Poloidal,
        Toroidal,
        Arbitrary
    };
    enum AnalysisType
    {
        None,
        Normal
    };
    enum ColoringMethod
    {
        ColorBySingleColor,
        ColorByColorTable
    };
    enum Opacity
    {
        Explicit,
        ColorTable
    };
    enum DataValue
    {
        Solid,
        SafetyFactorQ,
        SafetyFactorP,
        SafetyFactorQ_NotP,
        SafetyFactorP_NotQ,
        ToroidalWindings,
        PoloidalWindingsQ,
        PoloidalWindingsP,
        FieldlineOrder,
        PointOrder,
        PlaneOrder,
        WindingGroupOrder,
        WindingPointOrder,
        WindingPointOrderModulo
    };
    enum ParallelizationAlgorithmType
    {
        LoadOnDemand,
        ParallelStaticDomains,
        MasterSlave,
        VisItSelects
    };
    enum PathlinesCMFE
    {
        CONN_CMFE,
        POS_CMFE
    };
    enum PointType
    {
        Box,
        Axis,
        Icosahedron,
        Octahedron,
        Tetrahedron,
        SphereGeometry,
        Point,
        Sphere
    };

    // These constructors are for objects of this class
    PoincareAttributes();
    PoincareAttributes(const PoincareAttributes &obj);
protected:
    // These constructors are for objects derived from this class
    PoincareAttributes(private_tmfs_t tmfs);
    PoincareAttributes(const PoincareAttributes &obj, private_tmfs_t tmfs);
public:
    virtual ~PoincareAttributes();

    virtual PoincareAttributes& operator = (const PoincareAttributes &obj);
    virtual bool operator == (const PoincareAttributes &obj) const;
    virtual bool operator != (const PoincareAttributes &obj) const;
private:
    void Init();
    void Copy(const PoincareAttributes &obj);
public:

    virtual const std::string TypeName() const;
    virtual bool CopyAttributes(const AttributeGroup *);
    virtual AttributeSubject *CreateCompatible(const std::string &) const;
    virtual AttributeSubject *NewInstance(bool) const;

    // Property selection methods
    virtual void SelectAll();
    void SelectPointSource();
    void SelectLineStart();
    void SelectLineEnd();
    void SelectVelocitySource();
    void SelectSingleColor();
    void SelectColorTableName();
    void SelectOLineAxisFileName();

    // Property setting methods
    void SetOpacityType(Opacity opacityType_);
    void SetOpacity(double opacity_);
    void SetMinPunctures(int minPunctures_);
    void SetMaxPunctures(int maxPunctures_);
    void SetPuncturePlane(PuncturePlaneType puncturePlane_);
    void SetSourceType(SourceType sourceType_);
    void SetPointSource(const double *pointSource_);
    void SetLineStart(const double *lineStart_);
    void SetLineEnd(const double *lineEnd_);
    void SetPointDensity(int pointDensity_);
    void SetFieldType(FieldType fieldType_);
    void SetForceNodeCenteredData(bool forceNodeCenteredData_);
    void SetFieldConstant(double fieldConstant_);
    void SetVelocitySource(const double *velocitySource_);
    void SetIntegrationType(IntegrationType integrationType_);
    void SetCoordinateSystem(CoordinateSystem coordinateSystem_);
    void SetMaxStepLength(double maxStepLength_);
    void SetLimitMaximumTimestep(bool limitMaximumTimestep_);
    void SetMaxTimeStep(double maxTimeStep_);
    void SetRelTol(double relTol_);
    void SetAbsTolSizeType(SizeType absTolSizeType_);
    void SetAbsTolAbsolute(double absTolAbsolute_);
    void SetAbsTolBBox(double absTolBBox_);
    void SetAnalysis(AnalysisType analysis_);
    void SetMaximumToroidalWinding(int maximumToroidalWinding_);
    void SetOverrideToroidalWinding(int overrideToroidalWinding_);
    void SetOverridePoloidalWinding(int overridePoloidalWinding_);
    void SetWindingPairConfidence(double windingPairConfidence_);
    void SetRationalSurfaceFactor(double rationalSurfaceFactor_);
    void SetAdjustPlane(int adjustPlane_);
    void SetOverlaps(OverlapType overlaps_);
    void SetMeshType(ShowMeshType meshType_);
    void SetNumberPlanes(int numberPlanes_);
    void SetSinglePlane(double singlePlane_);
    void SetMin(double min_);
    void SetMax(double max_);
    void SetMinFlag(bool minFlag_);
    void SetMaxFlag(bool maxFlag_);
    void SetColorType(ColoringMethod colorType_);
    void SetSingleColor(const ColorAttribute &singleColor_);
    void SetColorTableName(const std::string &colorTableName_);
    void SetDataValue(DataValue dataValue_);
    void SetShowRationalSurfaces(bool showRationalSurfaces_);
    void SetRationalSurfaceMaxIterations(int RationalSurfaceMaxIterations_);
    void SetShowOPoints(bool showOPoints_);
    void SetOPointMaxIterations(int OPointMaxIterations_);
    void SetShowXPoints(bool showXPoints_);
    void SetXPointMaxIterations(int XPointMaxIterations_);
    void SetPerformOLineAnalysis(bool performOLineAnalysis_);
    void SetOLineToroidalWinding(int OLineToroidalWinding_);
    void SetOLineAxisFileName(const std::string &OLineAxisFileName_);
    void SetShowChaotic(bool showChaotic_);
    void SetShowIslands(bool showIslands_);
    void SetSummaryFlag(bool SummaryFlag_);
    void SetVerboseFlag(bool verboseFlag_);
    void SetShow1DPlots(bool show1DPlots_);
    void SetShowLines(bool showLines_);
    void SetLineWidth(int lineWidth_);
    void SetLineStyle(int lineStyle_);
    void SetShowPoints(bool showPoints_);
    void SetPointSize(double pointSize_);
    void SetPointSizePixels(int pointSizePixels_);
    void SetPointType(PointType pointType_);
    void SetLegendFlag(bool legendFlag_);
    void SetLightingFlag(bool lightingFlag_);
    void SetParallelizationAlgorithmType(ParallelizationAlgorithmType parallelizationAlgorithmType_);
    void SetMaxProcessCount(int maxProcessCount_);
    void SetMaxDomainCacheSize(int maxDomainCacheSize_);
    void SetWorkGroupSize(int workGroupSize_);
    void SetPathlines(bool pathlines_);
    void SetPathlinesOverrideStartingTimeFlag(bool pathlinesOverrideStartingTimeFlag_);
    void SetPathlinesOverrideStartingTime(double pathlinesOverrideStartingTime_);
    void SetPathlinesPeriod(double pathlinesPeriod_);
    void SetPathlinesCMFE(PathlinesCMFE pathlinesCMFE_);
    void SetIssueTerminationWarnings(bool issueTerminationWarnings_);
    void SetIssueStiffnessWarnings(bool issueStiffnessWarnings_);
    void SetIssueCriticalPointsWarnings(bool issueCriticalPointsWarnings_);
    void SetCriticalPointThreshold(double criticalPointThreshold_);

    // Property getting methods
    Opacity              GetOpacityType() const;
    double               GetOpacity() const;
    int                  GetMinPunctures() const;
    int                  GetMaxPunctures() const;
    PuncturePlaneType    GetPuncturePlane() const;
    SourceType           GetSourceType() const;
    const double         *GetPointSource() const;
          double         *GetPointSource();
    const double         *GetLineStart() const;
          double         *GetLineStart();
    const double         *GetLineEnd() const;
          double         *GetLineEnd();
    int                  GetPointDensity() const;
    FieldType            GetFieldType() const;
    bool                 GetForceNodeCenteredData() const;
    double               GetFieldConstant() const;
    const double         *GetVelocitySource() const;
          double         *GetVelocitySource();
    IntegrationType      GetIntegrationType() const;
    CoordinateSystem     GetCoordinateSystem() const;
    double               GetMaxStepLength() const;
    bool                 GetLimitMaximumTimestep() const;
    double               GetMaxTimeStep() const;
    double               GetRelTol() const;
    SizeType             GetAbsTolSizeType() const;
    double               GetAbsTolAbsolute() const;
    double               GetAbsTolBBox() const;
    AnalysisType         GetAnalysis() const;
    int                  GetMaximumToroidalWinding() const;
    int                  GetOverrideToroidalWinding() const;
    int                  GetOverridePoloidalWinding() const;
    double               GetWindingPairConfidence() const;
    double               GetRationalSurfaceFactor() const;
    int                  GetAdjustPlane() const;
    OverlapType          GetOverlaps() const;
    ShowMeshType         GetMeshType() const;
    int                  GetNumberPlanes() const;
    double               GetSinglePlane() const;
    double               GetMin() const;
    double               GetMax() const;
    bool                 GetMinFlag() const;
    bool                 GetMaxFlag() const;
    ColoringMethod       GetColorType() const;
    const ColorAttribute &GetSingleColor() const;
          ColorAttribute &GetSingleColor();
    const std::string    &GetColorTableName() const;
          std::string    &GetColorTableName();
    DataValue            GetDataValue() const;
    bool                 GetShowRationalSurfaces() const;
    int                  GetRationalSurfaceMaxIterations() const;
    bool                 GetShowOPoints() const;
    int                  GetOPointMaxIterations() const;
    bool                 GetShowXPoints() const;
    int                  GetXPointMaxIterations() const;
    bool                 GetPerformOLineAnalysis() const;
    int                  GetOLineToroidalWinding() const;
    const std::string    &GetOLineAxisFileName() const;
          std::string    &GetOLineAxisFileName();
    bool                 GetShowChaotic() const;
    bool                 GetShowIslands() const;
    bool                 GetSummaryFlag() const;
    bool                 GetVerboseFlag() const;
    bool                 GetShow1DPlots() const;
    bool                 GetShowLines() const;
    int                  GetLineWidth() const;
    int                  GetLineStyle() const;
    bool                 GetShowPoints() const;
    double               GetPointSize() const;
    int                  GetPointSizePixels() const;
    PointType            GetPointType() const;
    bool                 GetLegendFlag() const;
    bool                 GetLightingFlag() const;
    ParallelizationAlgorithmType GetParallelizationAlgorithmType() const;
    int                  GetMaxProcessCount() const;
    int                  GetMaxDomainCacheSize() const;
    int                  GetWorkGroupSize() const;
    bool                 GetPathlines() const;
    bool                 GetPathlinesOverrideStartingTimeFlag() const;
    double               GetPathlinesOverrideStartingTime() const;
    double               GetPathlinesPeriod() const;
    PathlinesCMFE        GetPathlinesCMFE() const;
    bool                 GetIssueTerminationWarnings() const;
    bool                 GetIssueStiffnessWarnings() const;
    bool                 GetIssueCriticalPointsWarnings() const;
    double               GetCriticalPointThreshold() const;

    // Persistence methods
    virtual bool CreateNode(DataNode *node, bool completeSave, bool forceAdd);
    virtual void SetFromNode(DataNode *node);

    // Enum conversion functions
    static std::string SourceType_ToString(SourceType);
    static bool SourceType_FromString(const std::string &, SourceType &);
protected:
    static std::string SourceType_ToString(int);
public:
    static std::string FieldType_ToString(FieldType);
    static bool FieldType_FromString(const std::string &, FieldType &);
protected:
    static std::string FieldType_ToString(int);
public:
    static std::string IntegrationType_ToString(IntegrationType);
    static bool IntegrationType_FromString(const std::string &, IntegrationType &);
protected:
    static std::string IntegrationType_ToString(int);
public:
    static std::string SizeType_ToString(SizeType);
    static bool SizeType_FromString(const std::string &, SizeType &);
protected:
    static std::string SizeType_ToString(int);
public:
    static std::string CoordinateSystem_ToString(CoordinateSystem);
    static bool CoordinateSystem_FromString(const std::string &, CoordinateSystem &);
protected:
    static std::string CoordinateSystem_ToString(int);
public:
    static std::string OverlapType_ToString(OverlapType);
    static bool OverlapType_FromString(const std::string &, OverlapType &);
protected:
    static std::string OverlapType_ToString(int);
public:
    static std::string ShowMeshType_ToString(ShowMeshType);
    static bool ShowMeshType_FromString(const std::string &, ShowMeshType &);
protected:
    static std::string ShowMeshType_ToString(int);
public:
    static std::string PuncturePlaneType_ToString(PuncturePlaneType);
    static bool PuncturePlaneType_FromString(const std::string &, PuncturePlaneType &);
protected:
    static std::string PuncturePlaneType_ToString(int);
public:
    static std::string AnalysisType_ToString(AnalysisType);
    static bool AnalysisType_FromString(const std::string &, AnalysisType &);
protected:
    static std::string AnalysisType_ToString(int);
public:
    static std::string ColoringMethod_ToString(ColoringMethod);
    static bool ColoringMethod_FromString(const std::string &, ColoringMethod &);
protected:
    static std::string ColoringMethod_ToString(int);
public:
    static std::string Opacity_ToString(Opacity);
    static bool Opacity_FromString(const std::string &, Opacity &);
protected:
    static std::string Opacity_ToString(int);
public:
    static std::string DataValue_ToString(DataValue);
    static bool DataValue_FromString(const std::string &, DataValue &);
protected:
    static std::string DataValue_ToString(int);
public:
    static std::string ParallelizationAlgorithmType_ToString(ParallelizationAlgorithmType);
    static bool ParallelizationAlgorithmType_FromString(const std::string &, ParallelizationAlgorithmType &);
protected:
    static std::string ParallelizationAlgorithmType_ToString(int);
public:
    static std::string PathlinesCMFE_ToString(PathlinesCMFE);
    static bool PathlinesCMFE_FromString(const std::string &, PathlinesCMFE &);
protected:
    static std::string PathlinesCMFE_ToString(int);
public:
    static std::string PointType_ToString(PointType);
    static bool PointType_FromString(const std::string &, PointType &);
protected:
    static std::string PointType_ToString(int);
public:

    // Keyframing methods
    virtual std::string               GetFieldName(int index) const;
    virtual AttributeGroup::FieldType GetFieldType(int index) const;
    virtual std::string               GetFieldTypeName(int index) const;
    virtual bool                      FieldsEqual(int index, const AttributeGroup *rhs) const;

    // User-defined methods
    bool ChangesRequireRecalculation(const PoincareAttributes &obj) const;
    bool StreamlineAttsRequireRecalculation(const PoincareAttributes &obj) const;
    bool PoincareAttsRequireRecalculation(const PoincareAttributes &obj) const;

    // IDs that can be used to identify fields in case statements
    enum {
        ID_opacityType = 0,
        ID_opacity,
        ID_minPunctures,
        ID_maxPunctures,
        ID_puncturePlane,
        ID_sourceType,
        ID_pointSource,
        ID_lineStart,
        ID_lineEnd,
        ID_pointDensity,
        ID_fieldType,
        ID_forceNodeCenteredData,
        ID_fieldConstant,
        ID_velocitySource,
        ID_integrationType,
        ID_coordinateSystem,
        ID_maxStepLength,
        ID_limitMaximumTimestep,
        ID_maxTimeStep,
        ID_relTol,
        ID_absTolSizeType,
        ID_absTolAbsolute,
        ID_absTolBBox,
        ID_analysis,
        ID_maximumToroidalWinding,
        ID_overrideToroidalWinding,
        ID_overridePoloidalWinding,
        ID_windingPairConfidence,
        ID_rationalSurfaceFactor,
        ID_adjustPlane,
        ID_overlaps,
        ID_meshType,
        ID_numberPlanes,
        ID_singlePlane,
        ID_min,
        ID_max,
        ID_minFlag,
        ID_maxFlag,
        ID_colorType,
        ID_singleColor,
        ID_colorTableName,
        ID_dataValue,
        ID_showRationalSurfaces,
        ID_RationalSurfaceMaxIterations,
        ID_showOPoints,
        ID_OPointMaxIterations,
        ID_showXPoints,
        ID_XPointMaxIterations,
        ID_performOLineAnalysis,
        ID_OLineToroidalWinding,
        ID_OLineAxisFileName,
        ID_showChaotic,
        ID_showIslands,
        ID_SummaryFlag,
        ID_verboseFlag,
        ID_show1DPlots,
        ID_showLines,
        ID_lineWidth,
        ID_lineStyle,
        ID_showPoints,
        ID_pointSize,
        ID_pointSizePixels,
        ID_pointType,
        ID_legendFlag,
        ID_lightingFlag,
        ID_parallelizationAlgorithmType,
        ID_maxProcessCount,
        ID_maxDomainCacheSize,
        ID_workGroupSize,
        ID_pathlines,
        ID_pathlinesOverrideStartingTimeFlag,
        ID_pathlinesOverrideStartingTime,
        ID_pathlinesPeriod,
        ID_pathlinesCMFE,
        ID_issueTerminationWarnings,
        ID_issueStiffnessWarnings,
        ID_issueCriticalPointsWarnings,
        ID_criticalPointThreshold,
        ID__LAST
    };

private:
    int            opacityType;
    double         opacity;
    int            minPunctures;
    int            maxPunctures;
    int            puncturePlane;
    int            sourceType;
    double         pointSource[3];
    double         lineStart[3];
    double         lineEnd[3];
    int            pointDensity;
    int            fieldType;
    bool           forceNodeCenteredData;
    double         fieldConstant;
    double         velocitySource[3];
    int            integrationType;
    int            coordinateSystem;
    double         maxStepLength;
    bool           limitMaximumTimestep;
    double         maxTimeStep;
    double         relTol;
    int            absTolSizeType;
    double         absTolAbsolute;
    double         absTolBBox;
    int            analysis;
    int            maximumToroidalWinding;
    int            overrideToroidalWinding;
    int            overridePoloidalWinding;
    double         windingPairConfidence;
    double         rationalSurfaceFactor;
    int            adjustPlane;
    int            overlaps;
    int            meshType;
    int            numberPlanes;
    double         singlePlane;
    double         min;
    double         max;
    bool           minFlag;
    bool           maxFlag;
    int            colorType;
    ColorAttribute singleColor;
    std::string    colorTableName;
    int            dataValue;
    bool           showRationalSurfaces;
    int            RationalSurfaceMaxIterations;
    bool           showOPoints;
    int            OPointMaxIterations;
    bool           showXPoints;
    int            XPointMaxIterations;
    bool           performOLineAnalysis;
    int            OLineToroidalWinding;
    std::string    OLineAxisFileName;
    bool           showChaotic;
    bool           showIslands;
    bool           SummaryFlag;
    bool           verboseFlag;
    bool           show1DPlots;
    bool           showLines;
    int            lineWidth;
    int            lineStyle;
    bool           showPoints;
    double         pointSize;
    int            pointSizePixels;
    int            pointType;
    bool           legendFlag;
    bool           lightingFlag;
    int            parallelizationAlgorithmType;
    int            maxProcessCount;
    int            maxDomainCacheSize;
    int            workGroupSize;
    bool           pathlines;
    bool           pathlinesOverrideStartingTimeFlag;
    double         pathlinesOverrideStartingTime;
    double         pathlinesPeriod;
    int            pathlinesCMFE;
    bool           issueTerminationWarnings;
    bool           issueStiffnessWarnings;
    bool           issueCriticalPointsWarnings;
    double         criticalPointThreshold;

    // Static class format string for type map.
    static const char *TypeMapFormatString;
    static const private_tmfs_t TmfsStruct;
};
#define POINCAREATTRIBUTES_TMFS "idiiiiDDDiibdDiidbddiddiiiiddiiiidddbbiasibibibibisbbbbbbiibdiibbiiiibbddibbbd"

#endif
