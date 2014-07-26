// ***************************************************************************
//
// Copyright (c) 2000 - 2014, Lawrence Livermore National Security, LLC
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

import java.lang.Double;
import java.util.Vector;

// ****************************************************************************
// Class: VisualCueInfo
//
// Purpose:
//    attributes necessary to describe a visual cue in a VisWindow (e.g. pick point or refline)
//
// Notes:      Autogenerated by xml2java.
//
// Programmer: xml2java
// Creation:   omitted
//
// Modifications:
//   
// ****************************************************************************

public class VisualCueInfo extends AttributeSubject
{
    private static int VisualCueInfo_numAdditionalAtts = 9;

    // Enum values
    public final static int CUETYPE_PICKPOINT = 0;
    public final static int CUETYPE_REFLINE = 1;
    public final static int CUETYPE_UNKNOWN = 2;


    public VisualCueInfo()
    {
        super(VisualCueInfo_numAdditionalAtts);

        points = new Vector();
        cueType = CUETYPE_UNKNOWN;
        color = new ColorAttribute(0, 0, 0);
        glyphType = new String("");
        label = new String("");
        showLabel = false;
        lineStyle = 0;
        lineWidth = 0;
        opacity = 1;
    }

    public VisualCueInfo(int nMoreFields)
    {
        super(VisualCueInfo_numAdditionalAtts + nMoreFields);

        points = new Vector();
        cueType = CUETYPE_UNKNOWN;
        color = new ColorAttribute(0, 0, 0);
        glyphType = new String("");
        label = new String("");
        showLabel = false;
        lineStyle = 0;
        lineWidth = 0;
        opacity = 1;
    }

    public VisualCueInfo(VisualCueInfo obj)
    {
        super(VisualCueInfo_numAdditionalAtts);

        int i;

        points = new Vector(obj.points.size());
        for(i = 0; i < obj.points.size(); ++i)
        {
            Double dv = (Double)obj.points.elementAt(i);
            points.addElement(new Double(dv.doubleValue()));
        }

        cueType = obj.cueType;
        color = new ColorAttribute(obj.color);
        glyphType = new String(obj.glyphType);
        label = new String(obj.label);
        showLabel = obj.showLabel;
        lineStyle = obj.lineStyle;
        lineWidth = obj.lineWidth;
        opacity = obj.opacity;

        SelectAll();
    }

    public int Offset()
    {
        return super.Offset() + super.GetNumAdditionalAttributes();
    }

    public int GetNumAdditionalAttributes()
    {
        return VisualCueInfo_numAdditionalAtts;
    }

    public boolean equals(VisualCueInfo obj)
    {
        int i;

        // Compare the elements in the points vector.
        boolean points_equal = (obj.points.size() == points.size());
        for(i = 0; (i < points.size()) && points_equal; ++i)
        {
            // Make references to Double from Object.
            Double points1 = (Double)points.elementAt(i);
            Double points2 = (Double)obj.points.elementAt(i);
            points_equal = points1.equals(points2);
        }
        // Create the return value
        return (points_equal &&
                (cueType == obj.cueType) &&
                (color == obj.color) &&
                (glyphType.equals(obj.glyphType)) &&
                (label.equals(obj.label)) &&
                (showLabel == obj.showLabel) &&
                (lineStyle == obj.lineStyle) &&
                (lineWidth == obj.lineWidth) &&
                (opacity == obj.opacity));
    }

    // Property setting methods
    public void SetPoints(Vector points_)
    {
        points = points_;
        Select(0);
    }

    public void SetCueType(int cueType_)
    {
        cueType = cueType_;
        Select(1);
    }

    public void SetColor(ColorAttribute color_)
    {
        color = color_;
        Select(2);
    }

    public void SetGlyphType(String glyphType_)
    {
        glyphType = glyphType_;
        Select(3);
    }

    public void SetLabel(String label_)
    {
        label = label_;
        Select(4);
    }

    public void SetShowLabel(boolean showLabel_)
    {
        showLabel = showLabel_;
        Select(5);
    }

    public void SetLineStyle(int lineStyle_)
    {
        lineStyle = lineStyle_;
        Select(6);
    }

    public void SetLineWidth(int lineWidth_)
    {
        lineWidth = lineWidth_;
        Select(7);
    }

    public void SetOpacity(double opacity_)
    {
        opacity = opacity_;
        Select(8);
    }

    // Property getting methods
    public Vector         GetPoints() { return points; }
    public int            GetCueType() { return cueType; }
    public ColorAttribute GetColor() { return color; }
    public String         GetGlyphType() { return glyphType; }
    public String         GetLabel() { return label; }
    public boolean        GetShowLabel() { return showLabel; }
    public int            GetLineStyle() { return lineStyle; }
    public int            GetLineWidth() { return lineWidth; }
    public double         GetOpacity() { return opacity; }

    // Write and read methods.
    public void WriteAtts(CommunicationBuffer buf)
    {
        if(WriteSelect(0, buf))
            buf.WriteDoubleVector(points);
        if(WriteSelect(1, buf))
            buf.WriteInt(cueType);
        if(WriteSelect(2, buf))
            color.Write(buf);
        if(WriteSelect(3, buf))
            buf.WriteString(glyphType);
        if(WriteSelect(4, buf))
            buf.WriteString(label);
        if(WriteSelect(5, buf))
            buf.WriteBool(showLabel);
        if(WriteSelect(6, buf))
            buf.WriteInt(lineStyle);
        if(WriteSelect(7, buf))
            buf.WriteInt(lineWidth);
        if(WriteSelect(8, buf))
            buf.WriteDouble(opacity);
    }

    public void ReadAtts(int index, CommunicationBuffer buf)
    {
        switch(index)
        {
        case 0:
            SetPoints(buf.ReadDoubleVector());
            break;
        case 1:
            SetCueType(buf.ReadInt());
            break;
        case 2:
            color.Read(buf);
            Select(2);
            break;
        case 3:
            SetGlyphType(buf.ReadString());
            break;
        case 4:
            SetLabel(buf.ReadString());
            break;
        case 5:
            SetShowLabel(buf.ReadBool());
            break;
        case 6:
            SetLineStyle(buf.ReadInt());
            break;
        case 7:
            SetLineWidth(buf.ReadInt());
            break;
        case 8:
            SetOpacity(buf.ReadDouble());
            break;
        }
    }

    public String toString(String indent)
    {
        String str = new String();
        str = str + doubleVectorToString("points", points, indent) + "\n";
        str = str + indent + "cueType = ";
        if(cueType == CUETYPE_PICKPOINT)
            str = str + "CUETYPE_PICKPOINT";
        if(cueType == CUETYPE_REFLINE)
            str = str + "CUETYPE_REFLINE";
        if(cueType == CUETYPE_UNKNOWN)
            str = str + "CUETYPE_UNKNOWN";
        str = str + "\n";
        str = str + indent + "color = {" + color.Red() + ", " + color.Green() + ", " + color.Blue() + ", " + color.Alpha() + "}\n";
        str = str + stringToString("glyphType", glyphType, indent) + "\n";
        str = str + stringToString("label", label, indent) + "\n";
        str = str + boolToString("showLabel", showLabel, indent) + "\n";
        str = str + intToString("lineStyle", lineStyle, indent) + "\n";
        str = str + intToString("lineWidth", lineWidth, indent) + "\n";
        str = str + doubleToString("opacity", opacity, indent) + "\n";
        return str;
    }


    // Attributes
    private Vector         points; // vector of Double objects
    private int            cueType;
    private ColorAttribute color;
    private String         glyphType;
    private String         label;
    private boolean        showLabel;
    private int            lineStyle;
    private int            lineWidth;
    private double         opacity;
}

