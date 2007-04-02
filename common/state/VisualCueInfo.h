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

#ifndef VISUALCUEINFO_H
#define VISUALCUEINFO_H
#include <state_exports.h>
#include <string>
#include <AttributeSubject.h>
#include <ColorAttribute.h>
#include <PickAttributes.h>
#include <Line.h>

// ****************************************************************************
// Class: VisualCueInfo
//
// Purpose:
//    attributes necessary to describe a visual cue in a VisWindow (e.g. pick point or refline)
//
// Notes:      Autogenerated by xml2atts.
//
// Programmer: xml2atts
// Creation:   Fri Mar 17 14:53:04 PST 2006
//
// Modifications:
//   
// ****************************************************************************

class STATE_API VisualCueInfo : public AttributeSubject
{
public:
    enum CueType
    {
        PickPoint,
        RefLine,
        Unknown
    };

    VisualCueInfo();
    VisualCueInfo(const VisualCueInfo &obj);
    virtual ~VisualCueInfo();

    virtual VisualCueInfo& operator = (const VisualCueInfo &obj);
    virtual bool operator == (const VisualCueInfo &obj) const;
    virtual bool operator != (const VisualCueInfo &obj) const;

    virtual const std::string TypeName() const;
    virtual bool CopyAttributes(const AttributeGroup *);
    virtual AttributeSubject *CreateCompatible(const std::string &) const;
    virtual AttributeSubject *NewInstance(bool) const;

    // Property selection methods
    virtual void SelectAll();
    void SelectPoints();
    void SelectColor();
    void SelectGlyphType();
    void SelectLabel();

    // Property setting methods
    void SetPoints(const doubleVector &points_);
    void SetCueType(CueType cueType_);
    void SetColor(const ColorAttribute &color_);
    void SetGlyphType(const std::string &glyphType_);
    void SetLabel(const std::string &label_);
    void SetShowLabel(bool showLabel_);
    void SetLineStyle(int lineStyle_);
    void SetLineWidth(int lineWidth_);
    void SetOpacity(double opacity_);

    // Property getting methods
    const doubleVector   &GetPoints() const;
          doubleVector   &GetPoints();
    CueType              GetCueType() const;
    const ColorAttribute &GetColor() const;
          ColorAttribute &GetColor();
    const std::string    &GetGlyphType() const;
          std::string    &GetGlyphType();
    const std::string    &GetLabel() const;
          std::string    &GetLabel();
    bool                 GetShowLabel() const;
    int                  GetLineStyle() const;
    int                  GetLineWidth() const;
    double               GetOpacity() const;

    // Enum conversion functions
    static std::string CueType_ToString(CueType);
    static bool CueType_FromString(const std::string &, CueType &);
protected:
    static std::string CueType_ToString(int);
public:

    // Keyframing methods
    virtual std::string               GetFieldName(int index) const;
    virtual AttributeGroup::FieldType GetFieldType(int index) const;
    virtual std::string               GetFieldTypeName(int index) const;
    virtual bool                      FieldsEqual(int index, const AttributeGroup *rhs) const;

    // User-defined methods
    void SetPointF(int i, const float *pt);
    bool GetPointF(int i, float *pt) const;
    void SetFromP(const PickAttributes *pa);
    void SetFromL(const Line *line);
    void SetPointD(int i, const double *pt);
    bool GetPointD(int i, double *pt) const;
private:
    doubleVector   points;
    int            cueType;
    ColorAttribute color;
    std::string    glyphType;
    std::string    label;
    bool           showLabel;
    int            lineStyle;
    int            lineWidth;
    double         opacity;
};

#endif
