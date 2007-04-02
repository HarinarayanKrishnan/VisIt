// ****************************************************************************
//
// Copyright (c) 2000 - 2006, The Regents of the University of California
// Produced at the Lawrence Livermore National Laboratory
// All rights reserved.
//
// This file is part of VisIt. For details, see http://www.llnl.gov/visit/. The
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
//    documentation and/or materials provided with the distribution.
//  - Neither the name of the UC/LLNL nor  the names of its contributors may be
//    used to  endorse or  promote products derived from  this software without
//    specific prior written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT  HOLDERS AND CONTRIBUTORS "AS IS"
// AND ANY EXPRESS OR  IMPLIED WARRANTIES, INCLUDING,  BUT NOT  LIMITED TO, THE
// IMPLIED WARRANTIES OF MERCHANTABILITY AND  FITNESS FOR A PARTICULAR  PURPOSE
// ARE  DISCLAIMED.  IN  NO  EVENT  SHALL  THE  REGENTS  OF  THE  UNIVERSITY OF
// CALIFORNIA, THE U.S.  DEPARTMENT  OF  ENERGY OR CONTRIBUTORS BE  LIABLE  FOR
// ANY  DIRECT,  INDIRECT,  INCIDENTAL,  SPECIAL,  EXEMPLARY,  OR CONSEQUENTIAL
// DAMAGES (INCLUDING, BUT NOT  LIMITED TO, PROCUREMENT OF  SUBSTITUTE GOODS OR
// SERVICES; LOSS OF  USE, DATA, OR PROFITS; OR  BUSINESS INTERRUPTION) HOWEVER
// CAUSED  AND  ON  ANY  THEORY  OF  LIABILITY,  WHETHER  IN  CONTRACT,  STRICT
// LIABILITY, OR TORT  (INCLUDING NEGLIGENCE OR OTHERWISE)  ARISING IN ANY  WAY
// OUT OF THE  USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH
// DAMAGE.
//
// ****************************************************************************

package llnl.visit;

import java.util.Vector;

// ****************************************************************************
// Class: ExportDBAttributes
//
// Purpose:
//    The attributes for export a database
//
// Notes:      Autogenerated by xml2java.
//
// Programmer: xml2java
// Creation:   Tue May 31 10:44:45 PDT 2005
//
// Modifications:
//   
// ****************************************************************************

public class ExportDBAttributes extends AttributeSubject
{
    public ExportDBAttributes()
    {
        super(6);

        db_type = new String("");
        db_type_fullname = new String("");
        filename = new String("visit_ex_db");
        dirname = new String(".");
        variables = new Vector();
        opts = new DBOptionsAttributes();
    }

    public ExportDBAttributes(ExportDBAttributes obj)
    {
        super(6);

        int i;

        db_type = new String(obj.db_type);
        db_type_fullname = new String(obj.db_type_fullname);
        filename = new String(obj.filename);
        dirname = new String(obj.dirname);
        variables = new Vector(obj.variables.size());
        for(i = 0; i < obj.variables.size(); ++i)
            variables.addElement(new String((String)obj.variables.elementAt(i)));

        opts = new DBOptionsAttributes(obj.opts);

        SelectAll();
    }

    public boolean equals(ExportDBAttributes obj)
    {
        int i;

        // Create the return value
        return ((db_type == obj.db_type) &&
                (db_type_fullname == obj.db_type_fullname) &&
                (filename == obj.filename) &&
                (dirname == obj.dirname) &&
                (variables == obj.variables) &&
                (opts == obj.opts));
    }

    // Property setting methods
    public void SetDb_type(String db_type_)
    {
        db_type = db_type_;
        Select(0);
    }

    public void SetDb_type_fullname(String db_type_fullname_)
    {
        db_type_fullname = db_type_fullname_;
        Select(1);
    }

    public void SetFilename(String filename_)
    {
        filename = filename_;
        Select(2);
    }

    public void SetDirname(String dirname_)
    {
        dirname = dirname_;
        Select(3);
    }

    public void SetVariables(Vector variables_)
    {
        variables = variables_;
        Select(4);
    }

    public void SetOpts(DBOptionsAttributes opts_)
    {
        opts = opts_;
        Select(5);
    }

    // Property getting methods
    public String              GetDb_type() { return db_type; }
    public String              GetDb_type_fullname() { return db_type_fullname; }
    public String              GetFilename() { return filename; }
    public String              GetDirname() { return dirname; }
    public Vector              GetVariables() { return variables; }
    public DBOptionsAttributes GetOpts() { return opts; }

    // Write and read methods.
    public void WriteAtts(CommunicationBuffer buf)
    {
        if(WriteSelect(0, buf))
            buf.WriteString(db_type);
        if(WriteSelect(1, buf))
            buf.WriteString(db_type_fullname);
        if(WriteSelect(2, buf))
            buf.WriteString(filename);
        if(WriteSelect(3, buf))
            buf.WriteString(dirname);
        if(WriteSelect(4, buf))
            buf.WriteStringVector(variables);
        if(WriteSelect(5, buf))
            opts.Write(buf);
    }

    public void ReadAtts(int n, CommunicationBuffer buf)
    {
        for(int i = 0; i < n; ++i)
        {
            int index = (int)buf.ReadByte();
            switch(index)
            {
            case 0:
                SetDb_type(buf.ReadString());
                break;
            case 1:
                SetDb_type_fullname(buf.ReadString());
                break;
            case 2:
                SetFilename(buf.ReadString());
                break;
            case 3:
                SetDirname(buf.ReadString());
                break;
            case 4:
                SetVariables(buf.ReadStringVector());
                break;
            case 5:
                opts.Read(buf);
                Select(5);
                break;
            }
        }
    }


    // Attributes
    private String              db_type;
    private String              db_type_fullname;
    private String              filename;
    private String              dirname;
    private Vector              variables; // vector of String objects
    private DBOptionsAttributes opts;
}

