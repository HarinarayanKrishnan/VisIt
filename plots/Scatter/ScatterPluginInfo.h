// ************************************************************************* //
//                               ScatterPluginInfo.h                            //
// ************************************************************************* //

#ifndef Scatter_PLUGIN_INFO_H
#define Scatter_PLUGIN_INFO_H
#include <PlotPluginInfo.h>
#include <plot_plugin_exports.h>

class ScatterAttributes;

// ****************************************************************************
//  Class: ScatterPluginInfo
//
//  Purpose:
//    Five classes that provide all the information about a Scatter
//    plot plugin.  The information is broken up into five classes since
//    portions of it are only relevant to particular components within
//    visit.  There is the general information which all the components
//    are interested in, the gui information which the gui is interested in,
//    the viewer information which the viewer is interested in, the
//    engine information which the engine is interested in, and finally a.
//    scripting portion that enables the Python VisIt extension to use the
//    plugin.
//
//  Programmer: whitlocb -- generated by xml2info
//  Creation:   Tue Nov 2 21:55:34 PST 2004
//
//  Modifications:
//    Brad Whitlock, Tue Dec 14 10:27:14 PDT 2004
//    Added a wizard.
//
// ****************************************************************************

class ScatterGeneralPluginInfo: public virtual GeneralPlotPluginInfo
{
  public:
    virtual char *GetName() const;
    virtual char *GetVersion() const;
    virtual char *GetID() const;
};

class ScatterCommonPluginInfo : public virtual CommonPlotPluginInfo, public virtual ScatterGeneralPluginInfo
{
  public:
    virtual AttributeSubject *AllocAttributes();
    virtual void CopyAttributes(AttributeSubject *to, AttributeSubject *from);
};

class ScatterGUIPluginInfo: public virtual GUIPlotPluginInfo, public virtual ScatterCommonPluginInfo
{
  public:
    virtual const char *GetMenuName() const;
    virtual int GetVariableTypes() const;
    virtual QvisPostableWindowObserver *CreatePluginWindow(int type,
        AttributeSubject *attr, QvisNotepadArea *notepad);
    virtual QvisWizard *CreatePluginWizard(AttributeSubject *, QWidget*, const char * = 0);
    virtual const char **XPMIconData() const;
};

class ScatterViewerPluginInfo: public virtual ViewerPlotPluginInfo, public virtual ScatterCommonPluginInfo
{
  public:
    virtual AttributeSubject *GetClientAtts();
    virtual AttributeSubject *GetDefaultAtts();
    virtual void SetClientAtts(AttributeSubject *atts);
    virtual void GetClientAtts(AttributeSubject *atts);

    virtual avtPlot *AllocAvtPlot();

    virtual void InitializePlotAtts(AttributeSubject *atts,
        const avtDatabaseMetaData *md,
        const char *variableName);
    virtual const char **XPMIconData() const;
    virtual int GetVariableTypes() const;

    static void InitializeGlobalObjects();
  private:
    static ScatterAttributes *defaultAtts;
    static ScatterAttributes *clientAtts;
};

class ScatterEnginePluginInfo: public virtual EnginePlotPluginInfo, public virtual ScatterCommonPluginInfo
{
  public:
    virtual avtPlot *AllocAvtPlot();
};

class ScatterScriptingPluginInfo : public virtual ScriptingPlotPluginInfo, public virtual ScatterCommonPluginInfo
{
  public:
    virtual void InitializePlugin(AttributeSubject *subj, FILE *log);
    virtual void *GetMethodTable(int *nMethods);
    virtual bool TypesMatch(void *pyobject);
    virtual void SetLogging(bool val);
    virtual void SetDefaults(const AttributeSubject *atts);
};

#endif
