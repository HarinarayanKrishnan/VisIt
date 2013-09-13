// ***************************************************************************
//
// Copyright (c) 2000 - 2013, Lawrence Livermore National Security, LLC
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
// Class: ExpressionList
//
// Purpose:
//    This class contains a list of expressions and some functions to manipulate them.
//
// Notes:      Autogenerated by xml2java.
//
// Programmer: xml2java
// Creation:   omitted
//
// Modifications:
//   
// ****************************************************************************

public class ExpressionList extends AttributeSubject
{
    private static int ExpressionList_numAdditionalAtts = 1;

    public ExpressionList()
    {
        super(ExpressionList_numAdditionalAtts);

        expressions = new Vector();
    }

    public ExpressionList(int nMoreFields)
    {
        super(ExpressionList_numAdditionalAtts + nMoreFields);

        expressions = new Vector();
    }

    public ExpressionList(ExpressionList obj)
    {
        super(ExpressionList_numAdditionalAtts);

        int i;

        // *** Copy the expressions field ***
        expressions = new Vector(obj.expressions.size());
        for(i = 0; i < obj.expressions.size(); ++i)
        {
            Expression oldObj = (Expression)obj.expressions.elementAt(i);
            expressions.addElement(new Expression(oldObj));
        }


        SelectAll();
    }

    public int Offset()
    {
        return super.Offset() + super.GetNumAdditionalAttributes();
    }

    public int GetNumAdditionalAttributes()
    {
        return ExpressionList_numAdditionalAtts;
    }

    public boolean equals(ExpressionList obj)
    {
        int i;

        // Compare the elements in the expressions vector.
        boolean expressions_equal = (obj.expressions.size() == expressions.size());
        for(i = 0; (i < expressions.size()) && expressions_equal; ++i)
        {
            // Make references to Expression from Object.
            Expression expressions1 = (Expression)expressions.elementAt(i);
            Expression expressions2 = (Expression)obj.expressions.elementAt(i);
            expressions_equal = expressions1.equals(expressions2);
        }
        // Create the return value
        return (expressions_equal);
    }

    // Property setting methods
    // Property getting methods
    public Vector GetExpressions() { return expressions; }

    // Write and read methods.
    public void WriteAtts(CommunicationBuffer buf)
    {
        if(WriteSelect(0, buf))
        {
            buf.WriteInt(expressions.size());
            for(int i = 0; i < expressions.size(); ++i)
            {
                Expression tmp = (Expression)expressions.elementAt(i);
                tmp.Write(buf);
            }
        }
    }

    public void ReadAtts(int index, CommunicationBuffer buf)
    {
        {
            int len = buf.ReadInt();
            expressions.clear();
            for(int j = 0; j < len; ++j)
            {
                Expression tmp = new Expression();
                tmp.Read(buf);
                expressions.addElement(tmp);
            }
        }
        Select(0);
    }

    public String toString(String indent)
    {
        String str = new String();
        str = str + indent + "expressions = {\n";
        for(int i = 0; i < expressions.size(); ++i)
        {
            AttributeSubject s = (AttributeSubject)expressions.elementAt(i);
            str = str + s.toString(indent + "    ");
            if(i < expressions.size()-1)
                str = str + ", ";
            str = str + "\n";
        }
        str = str + "}\n";
        return str;
    }

    // Attributegroup convenience methods
    public void AddExpressions(Expression obj)
    {
        expressions.addElement(new Expression(obj));
        Select(0);
    }

    public void ClearExpressions()
    {
        expressions.clear();
        Select(0);
    }

    public void RemoveExpressions(int index)
    {
        if(index >= 0 && index < expressions.size())
        {
            expressions.remove(index);
            Select(0);
        }
    }

    public int GetNumExpressions()
    {
        return expressions.size();
    }

    public Expression GetExpressions(int i)
    {
        Expression tmp = (Expression)expressions.elementAt(i);
        return tmp;
    }


    // Attributes
    private Vector expressions; // vector of Expression objects
}

