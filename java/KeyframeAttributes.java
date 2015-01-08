// ***************************************************************************
//
// Copyright (c) 2000 - 2015, Lawrence Livermore National Security, LLC
// Produced at the Lawrence Livermore National Laboratory
// LLNL-CODE-442911
// All rights reserved.
//
// This file is  part of VisIt. For  details, see https://visit.llnl.gov/.  The
// full copyright notice is contained in the file COPYRIGHT located at the root
// of the VisIt distribution or at http://www.llnl.gov/visit/copyright.html.
//
// Redistribution  and  use  in  source  and  binary  forms,  with  or  without
// modification, are permitted provided that the following conditions are met:
//
//  - Redistributions of  source code must  retain the above  copyright notice,
//    this list of conditions and the disclaimer below.
//  - Redistributions in binary form must reproduce the above copyright notice,
//    this  list of  conditions  and  the  disclaimer (as noted below)  in  the
//    documentation and/or other materials provided with the distribution.
//  - Neither the name of  the LLNS/LLNL nor the names of  its contributors may
//    be used to endorse or promote products derived from this software without
//    specific prior written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT  HOLDERS AND CONTRIBUTORS "AS IS"
// AND ANY EXPRESS OR  IMPLIED WARRANTIES, INCLUDING,  BUT NOT  LIMITED TO, THE
// IMPLIED WARRANTIES OF MERCHANTABILITY AND  FITNESS FOR A PARTICULAR  PURPOSE
// ARE  DISCLAIMED. IN  NO EVENT  SHALL LAWRENCE  LIVERMORE NATIONAL  SECURITY,
// LLC, THE  U.S.  DEPARTMENT OF  ENERGY  OR  CONTRIBUTORS BE  LIABLE  FOR  ANY
// DIRECT,  INDIRECT,   INCIDENTAL,   SPECIAL,   EXEMPLARY,  OR   CONSEQUENTIAL
// DAMAGES (INCLUDING, BUT NOT  LIMITED TO, PROCUREMENT OF  SUBSTITUTE GOODS OR
// SERVICES; LOSS OF  USE, DATA, OR PROFITS; OR  BUSINESS INTERRUPTION) HOWEVER
// CAUSED  AND  ON  ANY  THEORY  OF  LIABILITY,  WHETHER  IN  CONTRACT,  STRICT
// LIABILITY, OR TORT  (INCLUDING NEGLIGENCE OR OTHERWISE)  ARISING IN ANY  WAY
// OUT OF THE  USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH
// DAMAGE.
//
// ***************************************************************************

package llnl.visit;


// ****************************************************************************
// Class: KeyframeAttributes
//
// Purpose:
//    This class contains the attributes used for keyframing.
//
// Notes:      Autogenerated by xml2java.
//
// Programmer: xml2java
// Creation:   omitted
//
// Modifications:
//   
// ****************************************************************************

public class KeyframeAttributes extends AttributeSubject
{
    private static int KeyframeAttributes_numAdditionalAtts = 3;

    public KeyframeAttributes()
    {
        super(KeyframeAttributes_numAdditionalAtts);

        enabled = false;
        nFrames = 20;
        nFramesWasUserSet = false;
    }

    public KeyframeAttributes(int nMoreFields)
    {
        super(KeyframeAttributes_numAdditionalAtts + nMoreFields);

        enabled = false;
        nFrames = 20;
        nFramesWasUserSet = false;
    }

    public KeyframeAttributes(KeyframeAttributes obj)
    {
        super(KeyframeAttributes_numAdditionalAtts);

        enabled = obj.enabled;
        nFrames = obj.nFrames;
        nFramesWasUserSet = obj.nFramesWasUserSet;

        SelectAll();
    }

    public int Offset()
    {
        return super.Offset() + super.GetNumAdditionalAttributes();
    }

    public int GetNumAdditionalAttributes()
    {
        return KeyframeAttributes_numAdditionalAtts;
    }

    public boolean equals(KeyframeAttributes obj)
    {
        // Create the return value
        return ((enabled == obj.enabled) &&
                (nFrames == obj.nFrames) &&
                (nFramesWasUserSet == obj.nFramesWasUserSet));
    }

    // Property setting methods
    public void SetEnabled(boolean enabled_)
    {
        enabled = enabled_;
        Select(0);
    }

    public void SetNFrames(int nFrames_)
    {
        nFrames = nFrames_;
        Select(1);
    }

    public void SetNFramesWasUserSet(boolean nFramesWasUserSet_)
    {
        nFramesWasUserSet = nFramesWasUserSet_;
        Select(2);
    }

    // Property getting methods
    public boolean GetEnabled() { return enabled; }
    public int     GetNFrames() { return nFrames; }
    public boolean GetNFramesWasUserSet() { return nFramesWasUserSet; }

    // Write and read methods.
    public void WriteAtts(CommunicationBuffer buf)
    {
        if(WriteSelect(0, buf))
            buf.WriteBool(enabled);
        if(WriteSelect(1, buf))
            buf.WriteInt(nFrames);
        if(WriteSelect(2, buf))
            buf.WriteBool(nFramesWasUserSet);
    }

    public void ReadAtts(int index, CommunicationBuffer buf)
    {
        switch(index)
        {
        case 0:
            SetEnabled(buf.ReadBool());
            break;
        case 1:
            SetNFrames(buf.ReadInt());
            break;
        case 2:
            SetNFramesWasUserSet(buf.ReadBool());
            break;
        }
    }

    public String toString(String indent)
    {
        String str = new String();
        str = str + boolToString("enabled", enabled, indent) + "\n";
        str = str + intToString("nFrames", nFrames, indent) + "\n";
        str = str + boolToString("nFramesWasUserSet", nFramesWasUserSet, indent) + "\n";
        return str;
    }


    // Attributes
    private boolean enabled;
    private int     nFrames;
    private boolean nFramesWasUserSet;
}

