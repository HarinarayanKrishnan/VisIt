/*****************************************************************************
*
* Copyright (c) 2000 - 2006, The Regents of the University of California
* Produced at the Lawrence Livermore National Laboratory
* All rights reserved.
*
* This file is part of VisIt. For details, see http://www.llnl.gov/visit/. The
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
*    documentation and/or materials provided with the distribution.
*  - Neither the name of the UC/LLNL nor  the names of its contributors may be
*    used to  endorse or  promote products derived from  this software without
*    specific prior written permission.
*
* THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT  HOLDERS AND CONTRIBUTORS "AS IS"
* AND ANY EXPRESS OR  IMPLIED WARRANTIES, INCLUDING,  BUT NOT  LIMITED TO, THE
* IMPLIED WARRANTIES OF MERCHANTABILITY AND  FITNESS FOR A PARTICULAR  PURPOSE
* ARE  DISCLAIMED.  IN  NO  EVENT  SHALL  THE  REGENTS  OF  THE  UNIVERSITY OF
* CALIFORNIA, THE U.S.  DEPARTMENT  OF  ENERGY OR CONTRIBUTORS BE  LIABLE  FOR
* ANY  DIRECT,  INDIRECT,  INCIDENTAL,  SPECIAL,  EXEMPLARY,  OR CONSEQUENTIAL
* DAMAGES (INCLUDING, BUT NOT  LIMITED TO, PROCUREMENT OF  SUBSTITUTE GOODS OR
* SERVICES; LOSS OF  USE, DATA, OR PROFITS; OR  BUSINESS INTERRUPTION) HOWEVER
* CAUSED  AND  ON  ANY  THEORY  OF  LIABILITY,  WHETHER  IN  CONTRACT,  STRICT
* LIABILITY, OR TORT  (INCLUDING NEGLIGENCE OR OTHERWISE)  ARISING IN ANY  WAY
* OUT OF THE  USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH
* DAMAGE.
*
*****************************************************************************/

#ifndef PSEUDOCOLORATTRIBUTES_H
#define PSEUDOCOLORATTRIBUTES_H
#include <string>
#include <AttributeSubject.h>
#include <visitstream.h>

// ****************************************************************************
// Class: PseudocolorAttributes
//
// Purpose:
//    Attributes for the pseudocolor plot
//
// Notes:      Autogenerated by xml2atts.
//
// Programmer: xml2atts
// Creation:   Thu Aug 25 09:23:43 PDT 2005
//
// Modifications:
//   
// ****************************************************************************

class PseudocolorAttributes : public AttributeSubject
{
public:
    enum Centering
    {
        Natural,
        Nodal,
        Zonal
    };
    enum Scaling
    {
        Linear,
        Log,
        Skew
    };
    enum LimitsMode
    {
        OriginalData,
        CurrentPlot
    };
    enum PointType
    {
        Box,
        Axis,
        Icosahedron,
        Point,
        Sphere
    };

    PseudocolorAttributes();
    PseudocolorAttributes(const PseudocolorAttributes &obj);
    virtual ~PseudocolorAttributes();

    virtual PseudocolorAttributes& operator = (const PseudocolorAttributes &obj);
    virtual bool operator == (const PseudocolorAttributes &obj) const;
    virtual bool operator != (const PseudocolorAttributes &obj) const;

    virtual const std::string TypeName() const;
    virtual bool CopyAttributes(const AttributeGroup *);
    virtual AttributeSubject *CreateCompatible(const std::string &) const;
    virtual AttributeSubject *NewInstance(bool) const;

    // Property selection methods
    virtual void SelectAll();
    void SelectColorTableName();
    void SelectPointSizeVar();

    // Property setting methods
    void SetLegendFlag(bool legendFlag_);
    void SetLightingFlag(bool lightingFlag_);
    void SetMinFlag(bool minFlag_);
    void SetMaxFlag(bool maxFlag_);
    void SetCentering(Centering centering_);
    void SetScaling(Scaling scaling_);
    void SetLimitsMode(LimitsMode limitsMode_);
    void SetMin(double min_);
    void SetMax(double max_);
    void SetPointSize(double pointSize_);
    void SetPointType(PointType pointType_);
    void SetSkewFactor(double skewFactor_);
    void SetOpacity(double opacity_);
    void SetColorTableName(const std::string &colorTableName_);
    void SetSmoothingLevel(int smoothingLevel_);
    void SetPointSizeVarEnabled(bool pointSizeVarEnabled_);
    void SetPointSizeVar(const std::string &pointSizeVar_);
    void SetPointSizePixels(int pointSizePixels_);

    // Property getting methods
    bool              GetLegendFlag() const;
    bool              GetLightingFlag() const;
    bool              GetMinFlag() const;
    bool              GetMaxFlag() const;
    Centering         GetCentering() const;
    Scaling           GetScaling() const;
    LimitsMode        GetLimitsMode() const;
    double            GetMin() const;
    double            GetMax() const;
    double            GetPointSize() const;
    PointType         GetPointType() const;
    double            GetSkewFactor() const;
    double            GetOpacity() const;
    const std::string &GetColorTableName() const;
          std::string &GetColorTableName();
    int               GetSmoothingLevel() const;
    bool              GetPointSizeVarEnabled() const;
    const std::string &GetPointSizeVar() const;
          std::string &GetPointSizeVar();
    int               GetPointSizePixels() const;

    // Persistence methods
    virtual bool CreateNode(DataNode *node, bool completeSave, bool forceAdd);
    virtual void SetFromNode(DataNode *node);

    // Enum conversion functions
    static std::string Centering_ToString(Centering);
    static bool Centering_FromString(const std::string &, Centering &);
protected:
    static std::string Centering_ToString(int);
public:
    static std::string Scaling_ToString(Scaling);
    static bool Scaling_FromString(const std::string &, Scaling &);
protected:
    static std::string Scaling_ToString(int);
public:
    static std::string LimitsMode_ToString(LimitsMode);
    static bool LimitsMode_FromString(const std::string &, LimitsMode &);
protected:
    static std::string LimitsMode_ToString(int);
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
    bool ChangesRequireRecalculation(const PseudocolorAttributes &) const;
    void Print(ostream &, bool) const;
private:
    bool        legendFlag;
    bool        lightingFlag;
    bool        minFlag;
    bool        maxFlag;
    int         centering;
    int         scaling;
    int         limitsMode;
    double      min;
    double      max;
    double      pointSize;
    int         pointType;
    double      skewFactor;
    double      opacity;
    std::string colorTableName;
    int         smoothingLevel;
    bool        pointSizeVarEnabled;
    std::string pointSizeVar;
    int         pointSizePixels;
};

#endif
