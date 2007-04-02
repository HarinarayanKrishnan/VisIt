// ************************************************************************* //
//  File: ExternalSurfacePluginInfo.h
// ************************************************************************* //

#ifndef EXTERNALSURFACE_PLUGIN_INFO_H
#define EXTERNALSURFACE_PLUGIN_INFO_H
#include <OperatorPluginInfo.h>
#include <operator_plugin_exports.h>

class ExternalSurfaceAttributes;

// ****************************************************************************
//  Class: ExternalSurfacePluginInfo
//
//  Purpose:
//    Five classes that provide all the information about an ExternalSurface operator
//
//  Programmer: childs -- generated by xml2info
//  Creation:   Tue Aug 16 14:32:12 PST 2005
//
//  Modifications:
//
// ****************************************************************************

class ExternalSurfaceGeneralPluginInfo : public virtual GeneralOperatorPluginInfo
{
  public:
    virtual char *GetName() const;
    virtual char *GetVersion() const;
    virtual char *GetID() const;
    virtual bool  EnabledByDefault() const;
};

class ExternalSurfaceCommonPluginInfo : public virtual CommonOperatorPluginInfo, public virtual ExternalSurfaceGeneralPluginInfo
{
  public:
    virtual AttributeSubject *AllocAttributes();
    virtual void CopyAttributes(AttributeSubject *to, AttributeSubject *from);
};

class ExternalSurfaceGUIPluginInfo : public virtual GUIOperatorPluginInfo, public virtual ExternalSurfaceCommonPluginInfo
{
  public:
    virtual const char *GetMenuName() const;
    virtual QvisPostableWindowObserver *CreatePluginWindow(int type,
        AttributeSubject *attr, QvisNotepadArea *notepad);
};

class ExternalSurfaceViewerPluginInfo : public virtual ViewerOperatorPluginInfo, public virtual ExternalSurfaceCommonPluginInfo
{
  public:
    virtual AttributeSubject *GetClientAtts();
    virtual AttributeSubject *GetDefaultAtts();
    virtual void SetClientAtts(AttributeSubject *atts);
    virtual void GetClientAtts(AttributeSubject *atts);

    virtual void InitializeOperatorAtts(AttributeSubject *atts,
                                        const ViewerPlot *plot,
                                        const bool fromDefault);

    static void InitializeGlobalObjects();
  private:
    static ExternalSurfaceAttributes *defaultAtts;
    static ExternalSurfaceAttributes *clientAtts;
};

class ExternalSurfaceEnginePluginInfo : public virtual EngineOperatorPluginInfo, public virtual ExternalSurfaceCommonPluginInfo
{
  public:
    virtual avtPluginFilter *AllocAvtPluginFilter();
};

class ExternalSurfaceScriptingPluginInfo : public virtual ScriptingOperatorPluginInfo, public virtual ExternalSurfaceCommonPluginInfo
{
  public:
    virtual void InitializePlugin(AttributeSubject *subj, FILE *log);
    virtual void *GetMethodTable(int *nMethods);
    virtual bool TypesMatch(void *pyobject);
    virtual void SetLogging(bool val);
    virtual void SetDefaults(const AttributeSubject *atts);
};

#endif
