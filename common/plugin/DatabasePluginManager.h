/*****************************************************************************
*
* Copyright (c) 2000 - 2007, The Regents of the University of California
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

// ************************************************************************* //
//                         DatabasePluginManager.h                           //
// ************************************************************************* //

#ifndef DATABASE_PLUGIN_MANAGER_H
#define DATABASE_PLUGIN_MANAGER_H
#include <plugin_exports.h>
#include <PluginManager.h>
#include <string>
#include <vector>

class GeneralDatabasePluginInfo;
class CommonDatabasePluginInfo;
class MDServerDatabasePluginInfo;
class EngineDatabasePluginInfo;

// ****************************************************************************
//  Class: DatabasePluginManager
//
//  Purpose:
//    The database plugin manager.  It reads in the operator
//    plugins and provides information about the database plugins.
//
//  Programmer: Jeremy Meredith
//  Creation:   August 21, 2002
//
//  Modifications:
//    Jeremy Meredith, Fri Feb 28 12:26:45 PST 2003
//    Renamed LoadCommonPluginInfo to LoadGeneralPluginInfo to clarify its
//    purpose (which really is unrelated to FreeCommonPluginInfo and 
//    GetCommonPluginInfo).
//
//    Jeremy Meredith, Tue Feb 22 15:20:03 PST 2005
//    Added way to determine directly if a plugin has a writer.
//
//    Mark C. Miller, Mon Aug  6 13:36:16 PDT 2007
//    Added PluginFileExtensions, PluginFilenames and GetMatchingPluginId
//    add supporting data members, extensions, filenames.
// ****************************************************************************

class PLUGIN_API DatabasePluginManager : public PluginManager
{
  public:
    virtual                        ~DatabasePluginManager();

    static void                     Initialize(const PluginCategory, bool=false);
    static DatabasePluginManager   *Instance();

    virtual void                    ReloadPlugins();

    CommonDatabasePluginInfo       *GetCommonPluginInfo(const std::string&);
    EngineDatabasePluginInfo       *GetEnginePluginInfo(const std::string&);
    bool                            PluginHasWriter(const std::string&);
    std::vector<std::string>        PluginFileExtensions(const std::string&);
    std::vector<std::string>        PluginFilenames(const std::string&);

    std::string                     GetMatchingPluginId(const char *fname,
                                        bool searchAll = false);

  private:
                                    DatabasePluginManager();

    virtual bool                    LoadGeneralPluginInfo();
    virtual void                    LoadMDServerPluginInfo();
    virtual void                    LoadEnginePluginInfo();

    virtual void                    FreeCommonPluginInfo();

    // the plugin manager instance
    static DatabasePluginManager               *instance;

    // arrays containing all plugins (appends the ones in PluginManager.C)
    std::vector<bool>                       haswriter;
    std::vector<std::vector<std::string> >  extensions;
    std::vector<std::vector<std::string> >  filenames;

    // arrays containing enabled plugins
    std::vector<CommonDatabasePluginInfo*>      commonPluginInfo;
    std::vector<MDServerDatabasePluginInfo*>    mdserverPluginInfo;
    std::vector<EngineDatabasePluginInfo*>      enginePluginInfo;
};

#endif
