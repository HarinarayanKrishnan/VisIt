/*****************************************************************************
*
* Copyright (c) 2000 - 2014, Lawrence Livermore National Security, LLC
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

#ifndef AVTSUBSETSMETADATA_H
#define AVTSUBSETSMETADATA_H
#include <dbatts_exports.h>
#include <string>
#include <avtVarMetaData.h>

#include <NameschemeAttributes.h>
#include <vector>
#include <algorithm>
#include <NameschemeAttributes.h>

// ****************************************************************************
// Class: avtSubsetsMetaData
//
// Purpose:
//    Information about a particular category of subsets of a mesh (even for material subsets)
//
// Notes:      Autogenerated by xml2atts.
//
// Programmer: xml2atts
// Creation:   omitted
//
// Modifications:
//   
// ****************************************************************************

class DBATTS_API avtSubsetsMetaData : public avtVarMetaData
{
public:
    enum PartialCellModes
    {
        Include,
        Exclude,
        Dissect
    };
    enum DecompMode
    {
        None,
        Cover,
        Partition
    };

    // These constructors are for objects of this class
    avtSubsetsMetaData();
    avtSubsetsMetaData(const avtSubsetsMetaData &obj);
protected:
    // These constructors are for objects derived from this class
    avtSubsetsMetaData(private_tmfs_t tmfs);
    avtSubsetsMetaData(const avtSubsetsMetaData &obj, private_tmfs_t tmfs);
public:
    virtual ~avtSubsetsMetaData();

    virtual avtSubsetsMetaData& operator = (const avtSubsetsMetaData &obj);
    virtual bool operator == (const avtSubsetsMetaData &obj) const;
    virtual bool operator != (const avtSubsetsMetaData &obj) const;
private:
    void Init();
    void Copy(const avtSubsetsMetaData &obj);
public:

    virtual const std::string TypeName() const;
    virtual bool CopyAttributes(const AttributeGroup *);
    virtual AttributeSubject *CreateCompatible(const std::string &) const;
    virtual AttributeSubject *NewInstance(bool) const;

    // Property selection methods
    virtual void SelectAll();
    void SelectCatName();
    void SelectNameScheme();
    void SelectSetsToChunksMaps();
    void SelectGraphEdges();

    // Property setting methods
    void SetCatName(const std::string &catName_);
    void SetCatCount(int catCount_);
    void SetNameScheme(const NameschemeAttributes &nameScheme_);
    void SetSetsToChunksMaps(const intVector &setsToChunksMaps_);
    void SetGraphEdges(const intVector &graphEdges_);

    // Property getting methods
    const std::string          &GetCatName() const;
          std::string          &GetCatName();
    int                        GetCatCount() const;
    const NameschemeAttributes &GetNameScheme() const;
          NameschemeAttributes &GetNameScheme();
    const intVector            &GetSetsToChunksMaps() const;
          intVector            &GetSetsToChunksMaps();
    const intVector            &GetGraphEdges() const;
          intVector            &GetGraphEdges();

    // Enum conversion functions
    static std::string PartialCellModes_ToString(PartialCellModes);
    static bool PartialCellModes_FromString(const std::string &, PartialCellModes &);
protected:
    static std::string PartialCellModes_ToString(int);
public:
    static std::string DecompMode_ToString(DecompMode);
    static bool DecompMode_FromString(const std::string &, DecompMode &);
protected:
    static std::string DecompMode_ToString(int);
public:

    // Keyframing methods
    virtual std::string               GetFieldName(int index) const;
    virtual AttributeGroup::FieldType GetFieldType(int index) const;
    virtual std::string               GetFieldTypeName(int index) const;
    virtual bool                      FieldsEqual(int index, const AttributeGroup *rhs) const;

    // User-defined methods
    void Print(ostream &, int = 0) const;
    void AddGraphEdge(int head, int tail);
    void SetChunksForSet(int setId, std::vector<int> &chunks);
    avtSubsetsMetaData(const char *catName, int catCount, int maxTopoDim);
    avtSubsetsMetaData(const std::string &catName, int catCount, int maxTopoDim);
    void SetChunksForSet(int setId, const int *chunks, int len);

    // IDs that can be used to identify fields in case statements
    enum {
        ID_catName = avtVarMetaData::ID__LAST,
        ID_catCount,
        ID_nameScheme,
        ID_colorScheme,
        ID_setsToChunksMaps,
        ID_graphEdges,
        ID_isChunkCat,
        ID_isMaterialCat,
        ID_isUnionOfChunks,
        ID_hasPartialCells,
        ID_decompMode,
        ID_maxTopoDim,
        ID__LAST
    };

public:
    stringVector         colorScheme;
    bool                 isChunkCat;
    bool                 isMaterialCat;
    bool                 isUnionOfChunks;
    bool                 hasPartialCells;
    int                  decompMode;
    int                  maxTopoDim;
private:
    std::string          catName;
    int                  catCount;
    NameschemeAttributes nameScheme;
    intVector            setsToChunksMaps;
    intVector            graphEdges;

    // Static class format string for type map.
    static const char *TypeMapFormatString;
    static const private_tmfs_t TmfsStruct;
};
#define AVTSUBSETSMETADATA_TMFS AVTVARMETADATA_TMFS "sias*i*i*bbbbii"

#endif
