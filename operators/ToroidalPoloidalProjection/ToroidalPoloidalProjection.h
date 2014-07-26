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

#ifndef TOROIDALPOLOIDALPROJECTION_H
#define TOROIDALPOLOIDALPROJECTION_H
#include <string>
#include <AttributeSubject.h>


// ****************************************************************************
// Class: ToroidalPoloidalProjection
//
// Purpose:
//    Projects Exterior of Torus from 3D to ToroidalPoloidal mapping in 2D
//
// Notes:      Autogenerated by xml2atts.
//
// Programmer: xml2atts
// Creation:   omitted
//
// Modifications:
//   
// ****************************************************************************

class ToroidalPoloidalProjection : public AttributeSubject
{
public:
    enum CentroidSource
    {
        Manual,
        Auto
    };

    // These constructors are for objects of this class
    ToroidalPoloidalProjection();
    ToroidalPoloidalProjection(const ToroidalPoloidalProjection &obj);
protected:
    // These constructors are for objects derived from this class
    ToroidalPoloidalProjection(private_tmfs_t tmfs);
    ToroidalPoloidalProjection(const ToroidalPoloidalProjection &obj, private_tmfs_t tmfs);
public:
    virtual ~ToroidalPoloidalProjection();

    virtual ToroidalPoloidalProjection& operator = (const ToroidalPoloidalProjection &obj);
    virtual bool operator == (const ToroidalPoloidalProjection &obj) const;
    virtual bool operator != (const ToroidalPoloidalProjection &obj) const;
private:
    void Init();
    void Copy(const ToroidalPoloidalProjection &obj);
public:

    virtual const std::string TypeName() const;
    virtual bool CopyAttributes(const AttributeGroup *);
    virtual AttributeSubject *CreateCompatible(const std::string &) const;
    virtual AttributeSubject *NewInstance(bool) const;

    // Property selection methods
    virtual void SelectAll();
    void SelectCentroid();

    // Property setting methods
    void SetR0(double R0_);
    void SetR(double r_);
    void SetCentroidSource(CentroidSource centroidSource_);
    void SetCentroid(const double *centroid_);
    void SetProject2D(bool project2D_);

    // Property getting methods
    double       GetR0() const;
    double       GetR() const;
    CentroidSource GetCentroidSource() const;
    const double *GetCentroid() const;
          double *GetCentroid();
    bool         GetProject2D() const;

    // Persistence methods
    virtual bool CreateNode(DataNode *node, bool completeSave, bool forceAdd);
    virtual void SetFromNode(DataNode *node);

    // Enum conversion functions
    static std::string CentroidSource_ToString(CentroidSource);
    static bool CentroidSource_FromString(const std::string &, CentroidSource &);
protected:
    static std::string CentroidSource_ToString(int);
public:

    // Keyframing methods
    virtual std::string               GetFieldName(int index) const;
    virtual AttributeGroup::FieldType GetFieldType(int index) const;
    virtual std::string               GetFieldTypeName(int index) const;
    virtual bool                      FieldsEqual(int index, const AttributeGroup *rhs) const;


    // IDs that can be used to identify fields in case statements
    enum {
        ID_R0 = 0,
        ID_r,
        ID_centroidSource,
        ID_centroid,
        ID_project2D,
        ID__LAST
    };

private:
    double R0;
    double r;
    int    centroidSource;
    double centroid[3];
    bool   project2D;

    // Static class format string for type map.
    static const char *TypeMapFormatString;
    static const private_tmfs_t TmfsStruct;
};
#define TOROIDALPOLOIDALPROJECTION_TMFS "ddiDb"

#endif
