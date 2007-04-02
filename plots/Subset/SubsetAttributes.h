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

#ifndef SUBSETATTRIBUTES_H
#define SUBSETATTRIBUTES_H
#include <string>
#include <AttributeSubject.h>
#include <ColorAttribute.h>
#include <ColorAttributeList.h>

// ****************************************************************************
// Class: SubsetAttributes
//
// Purpose:
//    This class contains the plot attributes for the subset boundary plot.
//
// Notes:      Autogenerated by xml2atts.
//
// Programmer: xml2atts
// Creation:   Wed Aug 23 18:25:10 PST 2006
//
// Modifications:
//   
// ****************************************************************************

class SubsetAttributes : public AttributeSubject
{
public:
    enum Subset_Type
    {
        Domain,
        Group,
        Material,
        EnumScalar,
        Unknown
    };
    enum ColoringMethod
    {
        ColorBySingleColor,
        ColorByMultipleColors,
        ColorByColorTable
    };
    enum PointType
    {
        Box,
        Axis,
        Icosahedron,
        Point,
        Sphere
    };

    SubsetAttributes();
    SubsetAttributes(const SubsetAttributes &obj);
    virtual ~SubsetAttributes();

    virtual SubsetAttributes& operator = (const SubsetAttributes &obj);
    virtual bool operator == (const SubsetAttributes &obj) const;
    virtual bool operator != (const SubsetAttributes &obj) const;

    virtual const std::string TypeName() const;
    virtual bool CopyAttributes(const AttributeGroup *);
    virtual AttributeSubject *CreateCompatible(const std::string &) const;
    virtual AttributeSubject *NewInstance(bool) const;

    // Property selection methods
    virtual void SelectAll();
    void SelectColorTableName();
    void SelectSingleColor();
    void SelectMultiColor();
    void SelectSubsetNames();
    void SelectPointSizeVar();

    // Property setting methods
    void SetColorType(ColoringMethod colorType_);
    void SetColorTableName(const std::string &colorTableName_);
    void SetFilledFlag(bool filledFlag_);
    void SetLegendFlag(bool legendFlag_);
    void SetLineStyle(int lineStyle_);
    void SetLineWidth(int lineWidth_);
    void SetSingleColor(const ColorAttribute &singleColor_);
    void SetMultiColor(const ColorAttributeList &multiColor_);
    void SetSubsetNames(const stringVector &subsetNames_);
    void SetSubsetType(Subset_Type subsetType_);
    void SetOpacity(double opacity_);
    void SetWireframe(bool wireframe_);
    void SetDrawInternal(bool drawInternal_);
    void SetSmoothingLevel(int smoothingLevel_);
    void SetPointSize(double pointSize_);
    void SetPointType(PointType pointType_);
    void SetPointSizeVarEnabled(bool pointSizeVarEnabled_);
    void SetPointSizeVar(const std::string &pointSizeVar_);
    void SetPointSizePixels(int pointSizePixels_);

    // Property getting methods
    ColoringMethod           GetColorType() const;
    const std::string        &GetColorTableName() const;
          std::string        &GetColorTableName();
    bool                     GetFilledFlag() const;
    bool                     GetLegendFlag() const;
    int                      GetLineStyle() const;
    int                      GetLineWidth() const;
    const ColorAttribute     &GetSingleColor() const;
          ColorAttribute     &GetSingleColor();
    const ColorAttributeList &GetMultiColor() const;
          ColorAttributeList &GetMultiColor();
    const stringVector       &GetSubsetNames() const;
          stringVector       &GetSubsetNames();
    Subset_Type              GetSubsetType() const;
    double                   GetOpacity() const;
    bool                     GetWireframe() const;
    bool                     GetDrawInternal() const;
    int                      GetSmoothingLevel() const;
    double                   GetPointSize() const;
    PointType                GetPointType() const;
    bool                     GetPointSizeVarEnabled() const;
    const std::string        &GetPointSizeVar() const;
          std::string        &GetPointSizeVar();
    int                      GetPointSizePixels() const;

    // Persistence methods
    virtual bool CreateNode(DataNode *node, bool completeSave, bool forceAdd);
    virtual void SetFromNode(DataNode *node);

    // Enum conversion functions
    static std::string Subset_Type_ToString(Subset_Type);
    static bool Subset_Type_FromString(const std::string &, Subset_Type &);
protected:
    static std::string Subset_Type_ToString(int);
public:
    static std::string ColoringMethod_ToString(ColoringMethod);
    static bool ColoringMethod_FromString(const std::string &, ColoringMethod &);
protected:
    static std::string ColoringMethod_ToString(int);
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
    bool ChangesRequireRecalculation(const SubsetAttributes &obj);
    virtual bool VarChangeRequiresReset(void);
private:
    int                colorType;
    std::string        colorTableName;
    bool               filledFlag;
    bool               legendFlag;
    int                lineStyle;
    int                lineWidth;
    ColorAttribute     singleColor;
    ColorAttributeList multiColor;
    stringVector       subsetNames;
    int                subsetType;
    double             opacity;
    bool               wireframe;
    bool               drawInternal;
    int                smoothingLevel;
    double             pointSize;
    int                pointType;
    bool               pointSizeVarEnabled;
    std::string        pointSizeVar;
    int                pointSizePixels;
};

#endif
