/*****************************************************************************
* Copyright (c) 2014 Intelligent Light. All rights reserved.
* Work partially supported by DOE Grant SC0007548.
* FieldView XDB Export is provided expressly for use within VisIt.
* All other uses are strictly forbidden.
*****************************************************************************/

// ****************************************************************************
//                               XDBPluginInfo.h
// ****************************************************************************

#ifndef XDB_PLUGIN_INFO_H
#define XDB_PLUGIN_INFO_H
#include <DatabasePluginInfo.h>
#include <database_plugin_exports.h>

class avtDatabase;
class avtDatabaseWriter;

// ****************************************************************************
//  Class: XDBDatabasePluginInfo
//
//  Purpose:
//    Classes that provide all the information about the XDB plugin.
//    Portions are separated into pieces relevant to the appropriate
//    components of VisIt.
//
//  Programmer: generated by xml2info
//  Creation:   omitted
//
//  Modifications:
//
// ****************************************************************************

class XDBGeneralPluginInfo : public virtual GeneralDatabasePluginInfo
{
  public:
    virtual const char *GetName() const;
    virtual const char *GetVersion() const;
    virtual const char *GetID() const;
    virtual bool  EnabledByDefault() const;
    virtual bool  HasWriter() const;
    virtual std::vector<std::string> GetDefaultFilePatterns() const;
    virtual bool  AreDefaultFilePatternsStrict() const;
    virtual bool  OpensWholeDirectory() const;
};

class XDBCommonPluginInfo : public virtual CommonDatabasePluginInfo, public virtual XDBGeneralPluginInfo
{
  public:
    virtual DatabaseType              GetDatabaseType();
    virtual avtDatabase              *SetupDatabase(const char * const *list,
                                                    int nList, int nBlock);
    virtual std::string               GetLicense() const;
};

class XDBMDServerPluginInfo : public virtual MDServerDatabasePluginInfo, public virtual XDBCommonPluginInfo
{
  public:
    // this makes compilers happy... remove if we ever have functions here
    virtual void dummy();
};

class XDBEnginePluginInfo : public virtual EngineDatabasePluginInfo, public virtual XDBCommonPluginInfo
{
  public:
    virtual avtDatabaseWriter        *GetWriter(void);
};

#endif
