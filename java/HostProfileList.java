// ***************************************************************************
//
// Copyright (c) 2000 - 2011, Lawrence Livermore National Security, LLC
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

import java.util.Vector;

// ****************************************************************************
// Class: HostProfileList
//
// Purpose:
//    This class contains a list of host profiles.
//
// Notes:      Autogenerated by xml2java.
//
// Programmer: xml2java
// Creation:   omitted
//
// Modifications:
//   
// ****************************************************************************

public class HostProfileList extends AttributeSubject
{
    private static int HostProfileList_numAdditionalAtts = 1;

    public HostProfileList()
    {
        super(HostProfileList_numAdditionalAtts);

        machines = new Vector();
    }

    public HostProfileList(int nMoreFields)
    {
        super(HostProfileList_numAdditionalAtts + nMoreFields);

        machines = new Vector();
    }

    public HostProfileList(HostProfileList obj)
    {
        super(HostProfileList_numAdditionalAtts);

        int i;

        // *** Copy the machines field ***
        machines = new Vector(obj.machines.size());
        for(i = 0; i < obj.machines.size(); ++i)
        {
            MachineProfile oldObj = (MachineProfile)obj.machines.elementAt(i);
            machines.addElement(new MachineProfile(oldObj));
        }


        SelectAll();
    }

    public int Offset()
    {
        return super.Offset() + super.GetNumAdditionalAttributes();
    }

    public int GetNumAdditionalAttributes()
    {
        return HostProfileList_numAdditionalAtts;
    }

    public boolean equals(HostProfileList obj)
    {
        int i;

        // Compare the elements in the machines vector.
        boolean machines_equal = (obj.machines.size() == machines.size());
        for(i = 0; (i < machines.size()) && machines_equal; ++i)
        {
            // Make references to MachineProfile from Object.
            MachineProfile machines1 = (MachineProfile)machines.elementAt(i);
            MachineProfile machines2 = (MachineProfile)obj.machines.elementAt(i);
            machines_equal = machines1.equals(machines2);
        }
        // Create the return value
        return (machines_equal);
    }

    // Property setting methods
    // Property getting methods
    public Vector GetMachines() { return machines; }

    // Write and read methods.
    public void WriteAtts(CommunicationBuffer buf)
    {
        if(WriteSelect(0, buf))
        {
            buf.WriteInt(machines.size());
            for(int i = 0; i < machines.size(); ++i)
            {
                MachineProfile tmp = (MachineProfile)machines.elementAt(i);
                tmp.Write(buf);
            }
        }
    }

    public void ReadAtts(int index, CommunicationBuffer buf)
    {
        {
            int len = buf.ReadInt();
            machines.clear();
            for(int j = 0; j < len; ++j)
            {
                MachineProfile tmp = new MachineProfile();
                tmp.Read(buf);
                machines.addElement(tmp);
            }
        }
        Select(0);
    }

    public String toString(String indent)
    {
        String str = new String();
        str = str + indent + "machines = {\n";
        for(int i = 0; i < machines.size(); ++i)
        {
            AttributeSubject s = (AttributeSubject)machines.elementAt(i);
            str = str + s.toString(indent + "    ");
            if(i < machines.size()-1)
                str = str + ", ";
            str = str + "\n";
        }
        str = str + "}\n";
        return str;
    }

    // Attributegroup convenience methods
    public void AddMachines(MachineProfile obj)
    {
        machines.addElement(new MachineProfile(obj));
        Select(0);
    }

    public void ClearMachines()
    {
        machines.clear();
        Select(0);
    }

    public void RemoveMachines(int index)
    {
        if(index >= 0 && index < machines.size())
        {
            machines.remove(index);
            Select(0);
        }
    }

    public int GetNumMachines()
    {
        return machines.size();
    }

    public MachineProfile GetMachines(int i)
    {
        MachineProfile tmp = (MachineProfile)machines.elementAt(i);
        return tmp;
    }


    // Attributes
    private Vector machines; // vector of MachineProfile objects
}

