/*****************************************************************************
*
* Copyright (c) 2000 - 2010, Lawrence Livermore National Security, LLC
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

// ************************************************************************* //
//                            avtGMVFileFormat.h                             //
// ************************************************************************* //

#ifndef AVT_GMV_FILE_FORMAT_H
#define AVT_GMV_FILE_FORMAT_H

#include <avtSTMDFileFormat.h>

#include <vector>
#include <map>

#include <avtDatabaseMetaData.h>

class gmvPolyhedralSplit;

// ****************************************************************************
//  Class: avtGMVFileFormat
//
//  Purpose:
//      Reads in GMV files as a plugin to VisIt.
//
//  Programmer: Brad Whitlock
//  Creation:   Fri Oct 22 14:42:45 PST 2010
//
// ****************************************************************************

class avtGMVFileFormat : public avtSTMDFileFormat
{
public:
                       avtGMVFileFormat(const char *);
    virtual           ~avtGMVFileFormat();

    virtual int         GetCycle(void);
    virtual double      GetTime(void);

    virtual const char    *GetType(void)   { return "GMV"; };
    virtual void           FreeUpResources(void); 

    virtual void           ActivateTimestep(void);

    virtual vtkDataSet    *GetMesh(int, const char *);
    virtual vtkDataArray  *GetVar(int, const char *);
    virtual vtkDataArray  *GetVectorVar(int, const char *);

    virtual void          *GetAuxiliaryData(const char *var, int domain,
                                            const char *type, void *args, 
                                            DestructorFunction &);
protected:
    void ReadData();
    std::string GetMeshName(const std::string &initial) const;

    struct MeshData
    {
        vtkDataSet         *dataset;
        vtkDataArray       *material;
        int                 materialCentering;
        gmvPolyhedralSplit *polyhedralSplit;
    };

    // DATA MEMBERS
    bool                            dataRead;
    bool                            fileOpen;
    std::map<std::string, MeshData> meshes;
    avtDatabaseMetaData             md;
    int                             probCycle;
    double                          probTime;

    virtual void           PopulateDatabaseMetaData(avtDatabaseMetaData *);
};


#endif
