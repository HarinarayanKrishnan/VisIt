#ifndef COMPACTSILRESTRICTIONATTRIBUTES_H
#define COMPACTSILRESTRICTIONATTRIBUTES_H
#include <state_exports.h>
#include <string>
#include <AttributeSubject.h>

// ****************************************************************************
// Class: CompactSILRestrictionAttributes
//
// Purpose:
//    The class contains attributes for a compacted SIL restrictions.
//
// Notes:      Autogenerated by xml2atts.
//
// Programmer: xml2atts
// Creation:   Tue Mar 23 07:41:58 PDT 2004
//
// Modifications:
//   
// ****************************************************************************

class STATE_API CompactSILRestrictionAttributes : public AttributeSubject
{
public:
    CompactSILRestrictionAttributes();
    CompactSILRestrictionAttributes(const CompactSILRestrictionAttributes &obj);
    virtual ~CompactSILRestrictionAttributes();

    virtual void operator = (const CompactSILRestrictionAttributes &obj);
    virtual bool operator == (const CompactSILRestrictionAttributes &obj) const;
    virtual bool operator != (const CompactSILRestrictionAttributes &obj) const;

    virtual const std::string TypeName() const;
    virtual bool CopyAttributes(const AttributeGroup *);
    virtual AttributeSubject *CreateCompatible(const std::string &) const;
    virtual AttributeSubject *NewInstance(bool) const;

    // Property selection methods
    virtual void SelectAll();
    void SelectUseSet();
    void SelectTopSet();

    // Property setting methods
    void SetUseSet(const unsignedCharVector &useSet_);
    void SetTopSet(const std::string &topSet_);

    // Property getting methods
    const unsignedCharVector &GetUseSet() const;
          unsignedCharVector &GetUseSet();
    const std::string        &GetTopSet() const;
          std::string        &GetTopSet();

    // Persistence methods
    virtual bool CreateNode(DataNode *node, bool completeSave, bool forceAdd);
    virtual void SetFromNode(DataNode *node);


    // Keyframing methods
    virtual std::string               GetFieldName(int index) const;
    virtual AttributeGroup::FieldType GetFieldType(int index) const;
    virtual std::string               GetFieldTypeName(int index) const;
    virtual bool                      FieldsEqual(int index, const AttributeGroup *rhs) const;

private:
    unsignedCharVector useSet;
    std::string        topSet;
};

#endif
