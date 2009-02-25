// ***************************************************************************
//
// Copyright (c) 2000 - 2008, Lawrence Livermore National Security, LLC
// Produced at the Lawrence Livermore National Laboratory
// LLNL-CODE-400142
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

package llnl.visit.plots;

import llnl.visit.AttributeSubject;
import llnl.visit.CommunicationBuffer;
import llnl.visit.Plugin;
import llnl.visit.ColorAttribute;

// ****************************************************************************
// Class: PoincareAttributes
//
// Purpose:
//    Attributes for the Poincare plot
//
// Notes:      Autogenerated by xml2java.
//
// Programmer: xml2java
// Creation:   omitted
//
// Modifications:
//   
// ****************************************************************************

public class PoincareAttributes extends AttributeSubject implements Plugin
{
    // Enum values
    public final static int COLORINGMETHOD_SOLID = 0;
    public final static int COLORINGMETHOD_COLORBYSPEED = 1;
    public final static int COLORINGMETHOD_COLORBYVORTICITY = 2;
    public final static int COLORINGMETHOD_COLORBYLENGTH = 3;
    public final static int COLORINGMETHOD_COLORBYTIME = 4;
    public final static int COLORINGMETHOD_COLORBYSEEDPOINTID = 5;

    public final static int TERMINATIONTYPE_STEPS = 0;
    public final static int TERMINATIONTYPE_DISTANCE = 1;
    public final static int TERMINATIONTYPE_TIME = 2;

    public final static int SOURCETYPE_POINTSOURCE = 0;
    public final static int SOURCETYPE_LINESOURCE = 1;
    public final static int SOURCETYPE_PLANESOURCE = 2;

    public final static int COLORSTYLETYPE_ORIGINALVALUE = 0;
    public final static int COLORSTYLETYPE_INPUTORDER = 1;
    public final static int COLORSTYLETYPE_POINTINDEX = 2;
    public final static int COLORSTYLETYPE_PLANE = 3;
    public final static int COLORSTYLETYPE_TOROIDALWINDINGORDER = 4;
    public final static int COLORSTYLETYPE_TOROIDALWINDINGPOINTORDER = 5;
    public final static int COLORSTYLETYPE_TOROIDALWINDINGS = 6;
    public final static int COLORSTYLETYPE_POLOIDALWINDINGS = 7;
    public final static int COLORSTYLETYPE_SAFETYFACTOR = 8;

    public final static int SHOWMESHTYPE_CURVES = 0;
    public final static int SHOWMESHTYPE_SURFACES = 1;

    public final static int OVERLAPTYPE_RAW = 0;
    public final static int OVERLAPTYPE_REMOVE = 1;
    public final static int OVERLAPTYPE_MERGE = 2;
    public final static int OVERLAPTYPE_SMOOTH = 3;

    public final static int INTEGRATORTYPE_RUNGEKUTTA = 0;
    public final static int INTEGRATORTYPE_ADAMSBASHFORTH = 1;


    public PoincareAttributes()
    {
        super(30);

        termination = 10;
        terminationType = TERMINATIONTYPE_STEPS;
        integratorType = INTEGRATORTYPE_ADAMSBASHFORTH;
            showStreamlines = false;
        showPoints = false;
        pointDensity = 1;
        sourceRadius = 1;
        pointSource = new double[3];
        pointSource[0] = 0;
        pointSource[1] = 0;
        pointSource[2] = 0;
        lineSourceStart = new double[3];
        lineSourceStart[0] = 0;
        lineSourceStart[1] = 0;
        lineSourceStart[2] = 0;
        lineSourceEnd = new double[3];
        lineSourceEnd[0] = 1;
        lineSourceEnd[1] = 0;
        lineSourceEnd[2] = 0;
        planeSourcePoint = new double[3];
        planeSourcePoint[0] = 0;
        planeSourcePoint[1] = 0;
        planeSourcePoint[2] = 0;
        planeSourceNormal = new double[3];
        planeSourceNormal[0] = 0;
        planeSourceNormal[1] = 0;
        planeSourceNormal[2] = 1;
        planeSourceUpVec = new double[3];
        planeSourceUpVec[0] = 0;
        planeSourceUpVec[1] = 1;
        planeSourceUpVec[2] = 0;
        colorTableName = new String("Default");
        singleColor = new ColorAttribute(0, 0, 0);
        legendFlag = true;
        lightingFlag = true;
        relTol = 0.0001;
        absTol = 1e-05;
        maxStepLength = 0.1;
        NumberPlanes = 1;
        ColorStyle = COLORSTYLETYPE_SAFETYFACTOR;
        MaxToroidalWinding = 30;
        OverrideToroidalWinding = 0;
        HitRate = 0.9;
        ShowCurves = SHOWMESHTYPE_CURVES;
        AdjustPlane = -1;
        ShowIslands = false;
        Overlaps = OVERLAPTYPE_REMOVE;
    }

    public PoincareAttributes(PoincareAttributes obj)
    {
        super(30);

        int i;

        termination = obj.termination;
        terminationType = obj.terminationType;
        integratorType = obj.integratorType;
        streamlineSource = obj.streamlineSource;
        showStreamlines = obj.showStreamlines;
        showPoints = obj.showPoints;
        pointDensity = obj.pointDensity;
        sourceRadius = obj.sourceRadius;
        pointSource = new double[3];
        pointSource[0] = obj.pointSource[0];
        pointSource[1] = obj.pointSource[1];
        pointSource[2] = obj.pointSource[2];

        lineSourceStart = new double[3];
        lineSourceStart[0] = obj.lineSourceStart[0];
        lineSourceStart[1] = obj.lineSourceStart[1];
        lineSourceStart[2] = obj.lineSourceStart[2];

        lineSourceEnd = new double[3];
        lineSourceEnd[0] = obj.lineSourceEnd[0];
        lineSourceEnd[1] = obj.lineSourceEnd[1];
        lineSourceEnd[2] = obj.lineSourceEnd[2];

        planeSourcePoint = new double[3];
        planeSourcePoint[0] = obj.planeSourcePoint[0];
        planeSourcePoint[1] = obj.planeSourcePoint[1];
        planeSourcePoint[2] = obj.planeSourcePoint[2];

        planeSourceNormal = new double[3];
        planeSourceNormal[0] = obj.planeSourceNormal[0];
        planeSourceNormal[1] = obj.planeSourceNormal[1];
        planeSourceNormal[2] = obj.planeSourceNormal[2];

        planeSourceUpVec = new double[3];
        planeSourceUpVec[0] = obj.planeSourceUpVec[0];
        planeSourceUpVec[1] = obj.planeSourceUpVec[1];
        planeSourceUpVec[2] = obj.planeSourceUpVec[2];

        colorTableName = new String(obj.colorTableName);
        singleColor = new ColorAttribute(obj.singleColor);
        legendFlag = obj.legendFlag;
        lightingFlag = obj.lightingFlag;
        relTol = obj.relTol;
        absTol = obj.absTol;
        maxStepLength = obj.maxStepLength;
        NumberPlanes = obj.NumberPlanes;
        ColorStyle = obj.ColorStyle;
        MaxToroidalWinding = obj.MaxToroidalWinding;
        OverrideToroidalWinding = obj.OverrideToroidalWinding;
        HitRate = obj.HitRate;
        ShowCurves = obj.ShowCurves;
        AdjustPlane = obj.AdjustPlane;
        ShowIslands = obj.ShowIslands;
        Overlaps = obj.Overlaps;

        SelectAll();
    }

    public boolean equals(PoincareAttributes obj)
    {
        int i;

        // Compare the pointSource arrays.
        boolean pointSource_equal = true;
        for(i = 0; i < 3 && pointSource_equal; ++i)
            pointSource_equal = (pointSource[i] == obj.pointSource[i]);

        // Compare the lineSourceStart arrays.
        boolean lineSourceStart_equal = true;
        for(i = 0; i < 3 && lineSourceStart_equal; ++i)
            lineSourceStart_equal = (lineSourceStart[i] == obj.lineSourceStart[i]);

        // Compare the lineSourceEnd arrays.
        boolean lineSourceEnd_equal = true;
        for(i = 0; i < 3 && lineSourceEnd_equal; ++i)
            lineSourceEnd_equal = (lineSourceEnd[i] == obj.lineSourceEnd[i]);

        // Compare the planeSourcePoint arrays.
        boolean planeSourcePoint_equal = true;
        for(i = 0; i < 3 && planeSourcePoint_equal; ++i)
            planeSourcePoint_equal = (planeSourcePoint[i] == obj.planeSourcePoint[i]);

        // Compare the planeSourceNormal arrays.
        boolean planeSourceNormal_equal = true;
        for(i = 0; i < 3 && planeSourceNormal_equal; ++i)
            planeSourceNormal_equal = (planeSourceNormal[i] == obj.planeSourceNormal[i]);

        // Compare the planeSourceUpVec arrays.
        boolean planeSourceUpVec_equal = true;
        for(i = 0; i < 3 && planeSourceUpVec_equal; ++i)
            planeSourceUpVec_equal = (planeSourceUpVec[i] == obj.planeSourceUpVec[i]);

        // Create the return value
        return ((termination == obj.termination) &&
                (terminationType == obj.terminationType) &&
                (integratorType == obj.integratorType) &&
                (streamlineSource == obj.streamlineSource) &&
                (showStreamlines == obj.showStreamlines) &&
                (showPoints == obj.showPoints) &&
                (pointDensity == obj.pointDensity) &&
                (sourceRadius == obj.sourceRadius) &&
                pointSource_equal &&
                lineSourceStart_equal &&
                lineSourceEnd_equal &&
                planeSourcePoint_equal &&
                planeSourceNormal_equal &&
                planeSourceUpVec_equal &&
                (colorTableName.equals(obj.colorTableName)) &&
                (singleColor == obj.singleColor) &&
                (legendFlag == obj.legendFlag) &&
                (lightingFlag == obj.lightingFlag) &&
                (relTol == obj.relTol) &&
                (absTol == obj.absTol) &&
                (maxStepLength == obj.maxStepLength) &&
                (NumberPlanes == obj.NumberPlanes) &&
                (ColorStyle == obj.ColorStyle) &&
                (MaxToroidalWinding == obj.MaxToroidalWinding) &&
                (OverrideToroidalWinding == obj.OverrideToroidalWinding) &&
                (HitRate == obj.HitRate) &&
                (ShowCurves == obj.ShowCurves) &&
                (AdjustPlane == obj.AdjustPlane) &&
                (ShowIslands == obj.ShowIslands) &&
                (Overlaps == obj.Overlaps));
    }

    public String GetName() { return "Poincare"; }
    public String GetVersion() { return "1.0"; }

    // Property setting methods
    public void SetTermination(double termination_)
    {
        termination = termination_;
        Select(0);
    }

    public void SetTerminationType(int terminationType_)
    {
        terminationType = terminationType_;
        Select(1);
    }

    public void SetIntegratorType(int integratorType_)
    {
        integratorType = integratorType_;
        Select(2);
    }

    public void SetStreamlineSource(int streamlineSource_)
    {
        streamlineSource = streamlineSource_;
        Select(3);
    }

    public void SetShowStreamlines(boolean showStreamlines_)
    {
        showStreamlines = showStreamlines_;
        Select(4);
    }

    public void SetShowPoints(boolean showPoints_)
    {
        showPoints = showPoints_;
        Select(5);
    }

    public void SetPointDensity(int pointDensity_)
    {
        pointDensity = pointDensity_;
        Select(6);
    }

    public void SetSourceRadius(double sourceRadius_)
    {
        sourceRadius = sourceRadius_;
        Select(7);
    }

    public void SetPointSource(double[] pointSource_)
    {
        pointSource[0] = pointSource_[0];
        pointSource[1] = pointSource_[1];
        pointSource[2] = pointSource_[2];
        Select(8);
    }

    public void SetPointSource(double e0, double e1, double e2)
    {
        pointSource[0] = e0;
        pointSource[1] = e1;
        pointSource[2] = e2;
        Select(8);
    }

    public void SetLineSourceStart(double[] lineSourceStart_)
    {
        lineSourceStart[0] = lineSourceStart_[0];
        lineSourceStart[1] = lineSourceStart_[1];
        lineSourceStart[2] = lineSourceStart_[2];
        Select(9);
    }

    public void SetLineSourceStart(double e0, double e1, double e2)
    {
        lineSourceStart[0] = e0;
        lineSourceStart[1] = e1;
        lineSourceStart[2] = e2;
        Select(9);
    }

    public void SetLineSourceEnd(double[] lineSourceEnd_)
    {
        lineSourceEnd[0] = lineSourceEnd_[0];
        lineSourceEnd[1] = lineSourceEnd_[1];
        lineSourceEnd[2] = lineSourceEnd_[2];
        Select(10);
    }

    public void SetLineSourceEnd(double e0, double e1, double e2)
    {
        lineSourceEnd[0] = e0;
        lineSourceEnd[1] = e1;
        lineSourceEnd[2] = e2;
        Select(10);
    }

    public void SetPlaneSourcePoint(double[] planeSourcePoint_)
    {
        planeSourcePoint[0] = planeSourcePoint_[0];
        planeSourcePoint[1] = planeSourcePoint_[1];
        planeSourcePoint[2] = planeSourcePoint_[2];
        Select(11);
    }

    public void SetPlaneSourcePoint(double e0, double e1, double e2)
    {
        planeSourcePoint[0] = e0;
        planeSourcePoint[1] = e1;
        planeSourcePoint[2] = e2;
        Select(11);
    }

    public void SetPlaneSourceNormal(double[] planeSourceNormal_)
    {
        planeSourceNormal[0] = planeSourceNormal_[0];
        planeSourceNormal[1] = planeSourceNormal_[1];
        planeSourceNormal[2] = planeSourceNormal_[2];
        Select(12);
    }

    public void SetPlaneSourceNormal(double e0, double e1, double e2)
    {
        planeSourceNormal[0] = e0;
        planeSourceNormal[1] = e1;
        planeSourceNormal[2] = e2;
        Select(12);
    }

    public void SetPlaneSourceUpVec(double[] planeSourceUpVec_)
    {
        planeSourceUpVec[0] = planeSourceUpVec_[0];
        planeSourceUpVec[1] = planeSourceUpVec_[1];
        planeSourceUpVec[2] = planeSourceUpVec_[2];
        Select(13);
    }

    public void SetPlaneSourceUpVec(double e0, double e1, double e2)
    {
        planeSourceUpVec[0] = e0;
        planeSourceUpVec[1] = e1;
        planeSourceUpVec[2] = e2;
        Select(13);
    }

    public void SetColorTableName(String colorTableName_)
    {
        colorTableName = colorTableName_;
        Select(14);
    }

    public void SetSingleColor(ColorAttribute singleColor_)
    {
        singleColor = singleColor_;
        Select(15);
    }

    public void SetLegendFlag(boolean legendFlag_)
    {
        legendFlag = legendFlag_;
        Select(16);
    }

    public void SetLightingFlag(boolean lightingFlag_)
    {
        lightingFlag = lightingFlag_;
        Select(17);
    }

    public void SetRelTol(double relTol_)
    {
        relTol = relTol_;
        Select(18);
    }

    public void SetAbsTol(double absTol_)
    {
        absTol = absTol_;
        Select(19);
    }

    public void SetMaxStepLength(double maxStepLength_)
    {
        maxStepLength = maxStepLength_;
        Select(20);
    }

    public void SetNumberPlanes(int NumberPlanes_)
    {
        NumberPlanes = NumberPlanes_;
        Select(21);
    }

    public void SetColorStyle(int ColorStyle_)
    {
        ColorStyle = ColorStyle_;
        Select(22);
    }

    public void SetMaxToroidalWinding(int MaxToroidalWinding_)
    {
        MaxToroidalWinding = MaxToroidalWinding_;
        Select(23);
    }

    public void SetOverrideToroidalWinding(int OverrideToroidalWinding_)
    {
        OverrideToroidalWinding = OverrideToroidalWinding_;
        Select(24);
    }

    public void SetHitRate(double HitRate_)
    {
        HitRate = HitRate_;
        Select(25);
    }

    public void SetShowCurves(int ShowCurves_)
    {
        ShowCurves = ShowCurves_;
        Select(26);
    }

    public void SetAdjustPlane(int AdjustPlane_)
    {
        AdjustPlane = AdjustPlane_;
        Select(27);
    }

    public void SetShowIslands(boolean ShowIslands_)
    {
        ShowIslands = ShowIslands_;
        Select(28);
    }

    public void SetOverlaps(int Overlaps_)
    {
        Overlaps = Overlaps_;
        Select(29);
    }

    // Property getting methods
    public double         GetTermination() { return termination; }
    public int            GetTerminationType() { return terminationType; }
    public int            GetIntegratorType() { return integratorType; }
    public int            GetStreamlineSource() { return streamlineSource; }
    public boolean        GetShowStreamlines() { return showStreamlines; }
    public boolean        GetShowPoints() { return showPoints; }
    public int            GetPointDensity() { return pointDensity; }
    public double         GetSourceRadius() { return sourceRadius; }
    public double[]       GetPointSource() { return pointSource; }
    public double[]       GetLineSourceStart() { return lineSourceStart; }
    public double[]       GetLineSourceEnd() { return lineSourceEnd; }
    public double[]       GetPlaneSourcePoint() { return planeSourcePoint; }
    public double[]       GetPlaneSourceNormal() { return planeSourceNormal; }
    public double[]       GetPlaneSourceUpVec() { return planeSourceUpVec; }
    public String         GetColorTableName() { return colorTableName; }
    public ColorAttribute GetSingleColor() { return singleColor; }
    public boolean        GetLegendFlag() { return legendFlag; }
    public boolean        GetLightingFlag() { return lightingFlag; }
    public double         GetRelTol() { return relTol; }
    public double         GetAbsTol() { return absTol; }
    public double         GetMaxStepLength() { return maxStepLength; }
    public int            GetNumberPlanes() { return NumberPlanes; }
    public int            GetColorStyle() { return ColorStyle; }
    public int            GetMaxToroidalWinding() { return MaxToroidalWinding; }
    public int            GetOverrideToroidalWinding() { return OverrideToroidalWinding; }
    public double         GetHitRate() { return HitRate; }
    public int            GetShowCurves() { return ShowCurves; }
    public int            GetAdjustPlane() { return AdjustPlane; }
    public boolean        GetShowIslands() { return ShowIslands; }
    public int            GetOverlaps() { return Overlaps; }

    // Write and read methods.
    public void WriteAtts(CommunicationBuffer buf)
    {
        if(WriteSelect(0, buf))
            buf.WriteDouble(termination);
        if(WriteSelect(1, buf))
            buf.WriteInt(terminationType);
        if(WriteSelect(2, buf))
            buf.WriteInt(integratorType);
        if(WriteSelect(3, buf))
            buf.WriteInt(streamlineSource);
        if(WriteSelect(4, buf))
            buf.WriteBool(showStreamlines);
        if(WriteSelect(5, buf))
            buf.WriteBool(showPoints);
        if(WriteSelect(6, buf))
            buf.WriteInt(pointDensity);
        if(WriteSelect(7, buf))
            buf.WriteDouble(sourceRadius);
        if(WriteSelect(8, buf))
            buf.WriteDoubleArray(pointSource);
        if(WriteSelect(9, buf))
            buf.WriteDoubleArray(lineSourceStart);
        if(WriteSelect(10, buf))
            buf.WriteDoubleArray(lineSourceEnd);
        if(WriteSelect(11, buf))
            buf.WriteDoubleArray(planeSourcePoint);
        if(WriteSelect(12, buf))
            buf.WriteDoubleArray(planeSourceNormal);
        if(WriteSelect(13, buf))
            buf.WriteDoubleArray(planeSourceUpVec);
        if(WriteSelect(14, buf))
            buf.WriteString(colorTableName);
        if(WriteSelect(15, buf))
            singleColor.Write(buf);
        if(WriteSelect(16, buf))
            buf.WriteBool(legendFlag);
        if(WriteSelect(17, buf))
            buf.WriteBool(lightingFlag);
        if(WriteSelect(18, buf))
            buf.WriteDouble(relTol);
        if(WriteSelect(19, buf))
            buf.WriteDouble(absTol);
        if(WriteSelect(20, buf))
            buf.WriteDouble(maxStepLength);
        if(WriteSelect(21, buf))
            buf.WriteInt(NumberPlanes);
        if(WriteSelect(22, buf))
            buf.WriteInt(ColorStyle);
        if(WriteSelect(23, buf))
            buf.WriteInt(MaxToroidalWinding);
        if(WriteSelect(24, buf))
            buf.WriteInt(OverrideToroidalWinding);
        if(WriteSelect(25, buf))
            buf.WriteDouble(HitRate);
        if(WriteSelect(26, buf))
            buf.WriteInt(ShowCurves);
        if(WriteSelect(27, buf))
            buf.WriteInt(AdjustPlane);
        if(WriteSelect(28, buf))
            buf.WriteBool(ShowIslands);
        if(WriteSelect(29, buf))
            buf.WriteInt(Overlaps);
    }

    public void ReadAtts(int n, CommunicationBuffer buf)
    {
        for(int i = 0; i < n; ++i)
        {
            int index = (int)buf.ReadByte();
            switch(index)
            {
            case 0:
                SetTermination(buf.ReadDouble());
                break;
            case 1:
                SetTerminationType(buf.ReadInt());
                break;
            case 2:
                SetIntegratorType(buf.ReadInt());
                break;
            case 3:
                SetStreamlineSource(buf.ReadInt());
                break;
            case 4:
                SetShowStreamlines(buf.ReadBool());
                break;
            case 5:
                SetShowPoints(buf.ReadBool());
                break;
            case 6:
                SetPointDensity(buf.ReadInt());
                break;
            case 7:
                SetSourceRadius(buf.ReadDouble());
                break;
            case 8:
                SetPointSource(buf.ReadDoubleArray());
                break;
            case 9:
                SetLineSourceStart(buf.ReadDoubleArray());
                break;
            case 10:
                SetLineSourceEnd(buf.ReadDoubleArray());
                break;
            case 11:
                SetPlaneSourcePoint(buf.ReadDoubleArray());
                break;
            case 12:
                SetPlaneSourceNormal(buf.ReadDoubleArray());
                break;
            case 13:
                SetPlaneSourceUpVec(buf.ReadDoubleArray());
                break;
            case 14:
                SetColorTableName(buf.ReadString());
                break;
            case 15:
                singleColor.Read(buf);
                Select(15);
                break;
            case 16:
                SetLegendFlag(buf.ReadBool());
                break;
            case 17:
                SetLightingFlag(buf.ReadBool());
                break;
            case 18:
                SetRelTol(buf.ReadDouble());
                break;
            case 19:
                SetAbsTol(buf.ReadDouble());
                break;
            case 20:
                SetMaxStepLength(buf.ReadDouble());
                break;
            case 21:
                SetNumberPlanes(buf.ReadInt());
                break;
            case 22:
                SetColorStyle(buf.ReadInt());
                break;
            case 23:
                SetMaxToroidalWinding(buf.ReadInt());
                break;
            case 24:
                SetOverrideToroidalWinding(buf.ReadInt());
                break;
            case 25:
                SetHitRate(buf.ReadDouble());
                break;
            case 26:
                SetShowCurves(buf.ReadInt());
                break;
            case 27:
                SetAdjustPlane(buf.ReadInt());
                break;
            case 28:
                SetShowIslands(buf.ReadBool());
                break;
            case 29:
                SetOverlaps(buf.ReadInt());
                break;
            }
        }
    }

    public String toString(String indent)
    {
        String str = new String();
        str = str + doubleToString("termination", termination, indent) + "\n";
        str = str + indent + "terminationType = ";
        if(terminationType == TERMINATIONTYPE_STEPS)
            str = str + "TERMINATIONTYPE_STEPS";
        if(terminationType == TERMINATIONTYPE_DISTANCE)
            str = str + "TERMINATIONTYPE_DISTANCE";
        if(terminationType == TERMINATIONTYPE_TIME)
            str = str + "TERMINATIONTYPE_TIME";
        str = str + "\n";
        str = str + indent + "integratorType = ";
        if(integratorType == INTEGRATORTYPE_RUNGEKUTTA)
            str = str + "INTEGRATORTYPE_RUNGEKUTTA";
        if(integratorType == INTEGRATORTYPE_ADAMSBASHFORTH)
            str = str + "INTEGRATORTYPE_ADAMSBASHFORTH";
        str = str + "\n";
        str = str + indent + "streamlineSource = ";
        if(streamlineSource == SOURCETYPE_POINTSOURCE)
            str = str + "SOURCETYPE_POINTSOURCE";
        if(streamlineSource == SOURCETYPE_LINESOURCE)
            str = str + "SOURCETYPE_LINESOURCE";
        if(streamlineSource == SOURCETYPE_PLANESOURCE)
            str = str + "SOURCETYPE_PLANESOURCE";
        str = str + "\n";
        str = str + boolToString("showStreamlines", showStreamlines, indent) + "\n";
        str = str + boolToString("showPoints", showPoints, indent) + "\n";
        str = str + intToString("pointDensity", pointDensity, indent) + "\n";
        str = str + doubleToString("sourceRadius", sourceRadius, indent) + "\n";
        str = str + doubleArrayToString("pointSource", pointSource, indent) + "\n";
        str = str + doubleArrayToString("lineSourceStart", lineSourceStart, indent) + "\n";
        str = str + doubleArrayToString("lineSourceEnd", lineSourceEnd, indent) + "\n";
        str = str + doubleArrayToString("planeSourcePoint", planeSourcePoint, indent) + "\n";
        str = str + doubleArrayToString("planeSourceNormal", planeSourceNormal, indent) + "\n";
        str = str + doubleArrayToString("planeSourceUpVec", planeSourceUpVec, indent) + "\n";
        str = str + stringToString("colorTableName", colorTableName, indent) + "\n";
        str = str + indent + "singleColor = {" + singleColor.Red() + ", " + singleColor.Green() + ", " + singleColor.Blue() + ", " + singleColor.Alpha() + "}\n";
        str = str + boolToString("legendFlag", legendFlag, indent) + "\n";
        str = str + boolToString("lightingFlag", lightingFlag, indent) + "\n";
        str = str + doubleToString("relTol", relTol, indent) + "\n";
        str = str + doubleToString("absTol", absTol, indent) + "\n";
        str = str + doubleToString("maxStepLength", maxStepLength, indent) + "\n";
        str = str + intToString("NumberPlanes", NumberPlanes, indent) + "\n";
        str = str + indent + "ColorStyle = ";
        if(ColorStyle == COLORSTYLETYPE_ORIGINALVALUE)
            str = str + "COLORSTYLETYPE_ORIGINALVALUE";
        if(ColorStyle == COLORSTYLETYPE_INPUTORDER)
            str = str + "COLORSTYLETYPE_INPUTORDER";
        if(ColorStyle == COLORSTYLETYPE_POINTINDEX)
            str = str + "COLORSTYLETYPE_POINTINDEX";
        if(ColorStyle == COLORSTYLETYPE_PLANE)
            str = str + "COLORSTYLETYPE_PLANE";
        if(ColorStyle == COLORSTYLETYPE_TOROIDALWINDINGORDER)
            str = str + "COLORSTYLETYPE_TOROIDALWINDINGORDER";
        if(ColorStyle == COLORSTYLETYPE_TOROIDALWINDINGPOINTORDER)
            str = str + "COLORSTYLETYPE_TOROIDALWINDINGPOINTORDER";
        if(ColorStyle == COLORSTYLETYPE_TOROIDALWINDINGS)
            str = str + "COLORSTYLETYPE_TOROIDALWINDINGS";
        if(ColorStyle == COLORSTYLETYPE_POLOIDALWINDINGS)
            str = str + "COLORSTYLETYPE_POLOIDALWINDINGS";
        if(ColorStyle == COLORSTYLETYPE_SAFETYFACTOR)
            str = str + "COLORSTYLETYPE_SAFETYFACTOR";
        str = str + "\n";
        str = str + intToString("MaxToroidalWinding", MaxToroidalWinding, indent) + "\n";
        str = str + intToString("OverrideToroidalWinding", OverrideToroidalWinding, indent) + "\n";
        str = str + doubleToString("HitRate", HitRate, indent) + "\n";
        str = str + indent + "ShowCurves = ";
        if(ShowCurves == SHOWMESHTYPE_CURVES)
            str = str + "SHOWMESHTYPE_CURVES";
        if(ShowCurves == SHOWMESHTYPE_SURFACES)
            str = str + "SHOWMESHTYPE_SURFACES";
        str = str + "\n";
        str = str + intToString("AdjustPlane", AdjustPlane, indent) + "\n";
        str = str + boolToString("ShowIslands", ShowIslands, indent) + "\n";
        str = str + indent + "Overlaps = ";
        if(Overlaps == OVERLAPTYPE_RAW)
            str = str + "OVERLAPTYPE_RAW";
        if(Overlaps == OVERLAPTYPE_REMOVE)
            str = str + "OVERLAPTYPE_REMOVE";
        if(Overlaps == OVERLAPTYPE_MERGE)
            str = str + "OVERLAPTYPE_MERGE";
        if(Overlaps == OVERLAPTYPE_SMOOTH)
            str = str + "OVERLAPTYPE_SMOOTH";
        str = str + "\n";
        return str;
    }


    // Attributes
    private double         termination;
    private int            terminationType;
    private int            integratorType;
    private int            streamlineSource;
    private boolean        showStreamlines;
    private boolean        showPoints;
    private int            pointDensity;
    private double         sourceRadius;
    private double[]       pointSource;
    private double[]       lineSourceStart;
    private double[]       lineSourceEnd;
    private double[]       planeSourcePoint;
    private double[]       planeSourceNormal;
    private double[]       planeSourceUpVec;
    private String         colorTableName;
    private ColorAttribute singleColor;
    private boolean        legendFlag;
    private boolean        lightingFlag;
    private double         relTol;
    private double         absTol;
    private double         maxStepLength;
    private int            NumberPlanes;
    private int            ColorStyle;
    private int            MaxToroidalWinding;
    private int            OverrideToroidalWinding;
    private double         HitRate;
    private int            ShowCurves;
    private int            AdjustPlane;
    private boolean        ShowIslands;
    private int            Overlaps;
}

