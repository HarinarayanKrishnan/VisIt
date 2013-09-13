/*****************************************************************************
*
* Copyright (c) 2000 - 2013, Lawrence Livermore National Security, LLC
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

#ifndef ANIMATIONATTRIBUTES_H
#define ANIMATIONATTRIBUTES_H
#include <state_exports.h>
#include <string>
#include <AttributeSubject.h>


// ****************************************************************************
// Class: AnimationAttributes
//
// Purpose:
//    This class contains the animation attributes.
//
// Notes:      Autogenerated by xml2atts.
//
// Programmer: xml2atts
// Creation:   omitted
//
// Modifications:
//   
// ****************************************************************************

class STATE_API AnimationAttributes : public AttributeSubject
{
public:
    enum AnimationMode
    {
        ReversePlayMode,
        StopMode,
        PlayMode
    };
    enum PlaybackMode
    {
        Looping,
        PlayOnce,
        Swing
    };

    // These constructors are for objects of this class
    AnimationAttributes();
    AnimationAttributes(const AnimationAttributes &obj);
protected:
    // These constructors are for objects derived from this class
    AnimationAttributes(private_tmfs_t tmfs);
    AnimationAttributes(const AnimationAttributes &obj, private_tmfs_t tmfs);
public:
    virtual ~AnimationAttributes();

    virtual AnimationAttributes& operator = (const AnimationAttributes &obj);
    virtual bool operator == (const AnimationAttributes &obj) const;
    virtual bool operator != (const AnimationAttributes &obj) const;
private:
    void Init();
    void Copy(const AnimationAttributes &obj);
public:

    virtual const std::string TypeName() const;
    virtual bool CopyAttributes(const AttributeGroup *);
    virtual AttributeSubject *CreateCompatible(const std::string &) const;
    virtual AttributeSubject *NewInstance(bool) const;

    // Property selection methods
    virtual void SelectAll();

    // Property setting methods
    void SetAnimationMode(AnimationMode animationMode_);
    void SetPipelineCachingMode(bool pipelineCachingMode_);
    void SetFrameIncrement(int frameIncrement_);
    void SetTimeout(int timeout_);
    void SetPlaybackMode(PlaybackMode playbackMode_);

    // Property getting methods
    AnimationMode GetAnimationMode() const;
    bool GetPipelineCachingMode() const;
    int  GetFrameIncrement() const;
    int  GetTimeout() const;
    PlaybackMode GetPlaybackMode() const;

    // Persistence methods
    virtual bool CreateNode(DataNode *node, bool completeSave, bool forceAdd);
    virtual void SetFromNode(DataNode *node);

    // Enum conversion functions
    static std::string AnimationMode_ToString(AnimationMode);
    static bool AnimationMode_FromString(const std::string &, AnimationMode &);
protected:
    static std::string AnimationMode_ToString(int);
public:
    static std::string PlaybackMode_ToString(PlaybackMode);
    static bool PlaybackMode_FromString(const std::string &, PlaybackMode &);
protected:
    static std::string PlaybackMode_ToString(int);
public:

    // Keyframing methods
    virtual std::string               GetFieldName(int index) const;
    virtual AttributeGroup::FieldType GetFieldType(int index) const;
    virtual std::string               GetFieldTypeName(int index) const;
    virtual bool                      FieldsEqual(int index, const AttributeGroup *rhs) const;

    // User-defined methods
    virtual void ProcessOldVersions(DataNode *parentNode, const char *configVersion);

    // IDs that can be used to identify fields in case statements
    enum {
        ID_animationMode = 0,
        ID_pipelineCachingMode,
        ID_frameIncrement,
        ID_timeout,
        ID_playbackMode,
        ID__LAST
    };

private:
    int  animationMode;
    bool pipelineCachingMode;
    int  frameIncrement;
    int  timeout;
    int  playbackMode;

    // Static class format string for type map.
    static const char *TypeMapFormatString;
    static const private_tmfs_t TmfsStruct;
};
#define ANIMATIONATTRIBUTES_TMFS "ibiii"

#endif
