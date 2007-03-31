#ifndef VIEWATTRIBUTES_H
#define VIEWATTRIBUTES_H
#include <state_exports.h>
#include <AttributeSubject.h>

// ****************************************************************************
// Class: ViewAttributes
//
// Purpose:
//    This class contains the view attributes.
//
// Notes:      Autogenerated by xml2atts.
//
// Programmer: xml2atts
// Creation:   Wed Jul 23 11:32:00 PDT 2003
//
// Modifications:
//   
// ****************************************************************************

class STATE_API ViewAttributes : public AttributeSubject
{
public:
    ViewAttributes();
    ViewAttributes(const ViewAttributes &obj);
    virtual ~ViewAttributes();

    virtual void operator = (const ViewAttributes &obj);
    virtual bool operator == (const ViewAttributes &obj) const;
    virtual bool operator != (const ViewAttributes &obj) const;

    virtual const std::string TypeName() const;
    virtual bool CopyAttributes(const AttributeGroup *);
    virtual AttributeSubject *CreateCompatible(const std::string &) const;
    virtual AttributeSubject *NewInstance(bool) const;

    // Property selection methods
    virtual void SelectAll();
    void SelectViewNormal();
    void SelectFocus();
    void SelectViewUp();
    void SelectImagePan();
    void SelectWindowCoords();
    void SelectViewportCoords();

    // Property setting methods
    void SetViewNormal(const double *viewNormal_);
    void SetFocus(const double *focus_);
    void SetViewUp(const double *viewUp_);
    void SetViewAngle(double viewAngle_);
    void SetSetScale(bool setScale_);
    void SetParallelScale(double parallelScale_);
    void SetNearPlane(double nearPlane_);
    void SetFarPlane(double farPlane_);
    void SetImagePan(const double *imagePan_);
    void SetImageZoom(double imageZoom_);
    void SetPerspective(bool perspective_);
    void SetWindowCoords(const double *windowCoords_);
    void SetViewportCoords(const double *viewportCoords_);

    // Property getting methods
    const double *GetViewNormal() const;
          double *GetViewNormal();
    const double *GetFocus() const;
          double *GetFocus();
    const double *GetViewUp() const;
          double *GetViewUp();
    double       GetViewAngle() const;
    bool         GetSetScale() const;
    double       GetParallelScale() const;
    double       GetNearPlane() const;
    double       GetFarPlane() const;
    const double *GetImagePan() const;
          double *GetImagePan();
    double       GetImageZoom() const;
    bool         GetPerspective() const;
    const double *GetWindowCoords() const;
          double *GetWindowCoords();
    const double *GetViewportCoords() const;
          double *GetViewportCoords();

    // Persistence methods
    virtual bool CreateNode(DataNode *node, bool forceAdd);
    virtual void SetFromNode(DataNode *node);


    // Keyframing methods
    virtual std::string               GetFieldName(int index) const;
    virtual AttributeGroup::FieldType GetFieldType(int index) const;
    virtual std::string               GetFieldTypeName(int index) const;
    virtual bool                      FieldsEqual(int index, const AttributeGroup *rhs) const;

private:
    double viewNormal[3];
    double focus[3];
    double viewUp[3];
    double viewAngle;
    bool   setScale;
    double parallelScale;
    double nearPlane;
    double farPlane;
    double imagePan[2];
    double imageZoom;
    bool   perspective;
    double windowCoords[4];
    double viewportCoords[4];
};

#endif
