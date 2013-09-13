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

#ifndef SIMILARITYTRANSFORMATTRIBUTES_H
#define SIMILARITYTRANSFORMATTRIBUTES_H
#include <state_exports.h>
#include <string>
#include <AttributeSubject.h>


// ****************************************************************************
// Class: SimilarityTransformAttributes
//
// Purpose:
//    This class contains attributes for the similarity transform.
//
// Notes:      Autogenerated by xml2atts.
//
// Programmer: xml2atts
// Creation:   omitted
//
// Modifications:
//   
// ****************************************************************************

class STATE_API SimilarityTransformAttributes : public AttributeSubject
{
public:
    enum AngleType
    {
        Deg,
        Rad
    };

    // These constructors are for objects of this class
    SimilarityTransformAttributes();
    SimilarityTransformAttributes(const SimilarityTransformAttributes &obj);
protected:
    // These constructors are for objects derived from this class
    SimilarityTransformAttributes(private_tmfs_t tmfs);
    SimilarityTransformAttributes(const SimilarityTransformAttributes &obj, private_tmfs_t tmfs);
public:
    virtual ~SimilarityTransformAttributes();

    virtual SimilarityTransformAttributes& operator = (const SimilarityTransformAttributes &obj);
    virtual bool operator == (const SimilarityTransformAttributes &obj) const;
    virtual bool operator != (const SimilarityTransformAttributes &obj) const;
private:
    void Init();
    void Copy(const SimilarityTransformAttributes &obj);
public:

    virtual const std::string TypeName() const;
    virtual bool CopyAttributes(const AttributeGroup *);
    virtual AttributeSubject *CreateCompatible(const std::string &) const;
    virtual AttributeSubject *NewInstance(bool) const;

    // Property selection methods
    virtual void SelectAll();
    void SelectRotateOrigin();
    void SelectRotateAxis();
    void SelectScaleOrigin();

    // Property setting methods
    void SetDoRotate(bool doRotate_);
    void SetRotateOrigin(const double *rotateOrigin_);
    void SetRotateAxis(const double *rotateAxis_);
    void SetRotateAmount(double rotateAmount_);
    void SetRotateType(AngleType rotateType_);
    void SetDoScale(bool doScale_);
    void SetScaleOrigin(const double *scaleOrigin_);
    void SetScaleX(double scaleX_);
    void SetScaleY(double scaleY_);
    void SetScaleZ(double scaleZ_);
    void SetDoTranslate(bool doTranslate_);
    void SetTranslateX(double translateX_);
    void SetTranslateY(double translateY_);
    void SetTranslateZ(double translateZ_);
    void SetTransformVectors(bool transformVectors_);

    // Property getting methods
    bool         GetDoRotate() const;
    const double *GetRotateOrigin() const;
          double *GetRotateOrigin();
    const double *GetRotateAxis() const;
          double *GetRotateAxis();
    double       GetRotateAmount() const;
    AngleType    GetRotateType() const;
    bool         GetDoScale() const;
    const double *GetScaleOrigin() const;
          double *GetScaleOrigin();
    double       GetScaleX() const;
    double       GetScaleY() const;
    double       GetScaleZ() const;
    bool         GetDoTranslate() const;
    double       GetTranslateX() const;
    double       GetTranslateY() const;
    double       GetTranslateZ() const;
    bool         GetTransformVectors() const;

    // Persistence methods
    virtual bool CreateNode(DataNode *node, bool completeSave, bool forceAdd);
    virtual void SetFromNode(DataNode *node);

    // Enum conversion functions
    static std::string AngleType_ToString(AngleType);
    static bool AngleType_FromString(const std::string &, AngleType &);
protected:
    static std::string AngleType_ToString(int);
public:

    // Keyframing methods
    virtual std::string               GetFieldName(int index) const;
    virtual AttributeGroup::FieldType GetFieldType(int index) const;
    virtual std::string               GetFieldTypeName(int index) const;
    virtual bool                      FieldsEqual(int index, const AttributeGroup *rhs) const;


    // IDs that can be used to identify fields in case statements
    enum {
        ID_doRotate = 0,
        ID_rotateOrigin,
        ID_rotateAxis,
        ID_rotateAmount,
        ID_rotateType,
        ID_doScale,
        ID_scaleOrigin,
        ID_scaleX,
        ID_scaleY,
        ID_scaleZ,
        ID_doTranslate,
        ID_translateX,
        ID_translateY,
        ID_translateZ,
        ID_transformVectors,
        ID__LAST
    };

private:
    bool   doRotate;
    double rotateOrigin[3];
    double rotateAxis[3];
    double rotateAmount;
    int    rotateType;
    bool   doScale;
    double scaleOrigin[3];
    double scaleX;
    double scaleY;
    double scaleZ;
    bool   doTranslate;
    double translateX;
    double translateY;
    double translateZ;
    bool   transformVectors;

    // Static class format string for type map.
    static const char *TypeMapFormatString;
    static const private_tmfs_t TmfsStruct;
};
#define SIMILARITYTRANSFORMATTRIBUTES_TMFS "bDDdibDdddbdddb"

#endif
