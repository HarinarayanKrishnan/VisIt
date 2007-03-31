#ifndef HISTOGRAMATTRIBUTES_H
#define HISTOGRAMATTRIBUTES_H
#include <string>
#include <AttributeSubject.h>
#include <ColorAttribute.h>

// ****************************************************************************
// Class: HistogramAttributes
//
// Purpose:
//    Attributes for Histogram Plot
//
// Notes:      Autogenerated by xml2atts.
//
// Programmer: xml2atts
// Creation:   Thu Dec 18 11:51:06 PDT 2003
//
// Modifications:
//   
// ****************************************************************************

class HistogramAttributes : public AttributeSubject
{
public:
    enum OutputType
    {
        Curve,
        Block
    };
    enum TwoDAmount
    {
        Area,
        RevolvedVolume
    };

    HistogramAttributes();
    HistogramAttributes(const HistogramAttributes &obj);
    virtual ~HistogramAttributes();

    virtual void operator = (const HistogramAttributes &obj);
    virtual bool operator == (const HistogramAttributes &obj) const;
    virtual bool operator != (const HistogramAttributes &obj) const;

    virtual const std::string TypeName() const;
    virtual bool CopyAttributes(const AttributeGroup *);
    virtual AttributeSubject *CreateCompatible(const std::string &) const;
    virtual AttributeSubject *NewInstance(bool) const;

    // Property selection methods
    virtual void SelectAll();
    void SelectColor();

    // Property setting methods
    void SetSpecifyRange(bool specifyRange_);
    void SetMin(double min_);
    void SetMax(double max_);
    void SetOutputType(OutputType outputType_);
    void SetNumBins(int numBins_);
    void SetTwoDAmount(TwoDAmount twoDAmount_);
    void SetLineStyle(int lineStyle_);
    void SetLineWidth(int lineWidth_);
    void SetColor(const ColorAttribute &color_);

    // Property getting methods
    bool                 GetSpecifyRange() const;
    double               GetMin() const;
    double               GetMax() const;
    OutputType           GetOutputType() const;
    int                  GetNumBins() const;
    TwoDAmount           GetTwoDAmount() const;
    int                  GetLineStyle() const;
    int                  GetLineWidth() const;
    const ColorAttribute &GetColor() const;
          ColorAttribute &GetColor();

    // Persistence methods
    virtual bool CreateNode(DataNode *node, bool completeSave, bool forceAdd);
    virtual void SetFromNode(DataNode *node);

    // Enum conversion functions
    static std::string OutputType_ToString(OutputType);
    static bool OutputType_FromString(const std::string &, OutputType &);
protected:
    static std::string OutputType_ToString(int);
public:
    static std::string TwoDAmount_ToString(TwoDAmount);
    static bool TwoDAmount_FromString(const std::string &, TwoDAmount &);
protected:
    static std::string TwoDAmount_ToString(int);
public:

    // Keyframing methods
    virtual std::string               GetFieldName(int index) const;
    virtual AttributeGroup::FieldType GetFieldType(int index) const;
    virtual std::string               GetFieldTypeName(int index) const;
    virtual bool                      FieldsEqual(int index, const AttributeGroup *rhs) const;

    // User-defined methods
    bool ChangesRequireRecalculation(const HistogramAttributes &) const;
private:
    bool           specifyRange;
    double         min;
    double         max;
    int            outputType;
    int            numBins;
    int            twoDAmount;
    int            lineStyle;
    int            lineWidth;
    ColorAttribute color;
};

#endif
