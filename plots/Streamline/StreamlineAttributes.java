// ***************************************************************************
//
// Copyright (c) 2000 - 2009, Lawrence Livermore National Security, LLC
// Produced at the Lawrence Livermore National Laboratory
// LLNL-CODE-400124
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
import java.lang.Double;
import java.util.Vector;
import llnl.visit.ColorAttribute;

// ****************************************************************************
// Class: StreamlineAttributes
//
// Purpose:
//    Attributes for the Streamline plot
//
// Notes:      Autogenerated by xml2java.
//
// Programmer: xml2java
// Creation:   omitted
//
// Modifications:
//   
// ****************************************************************************

public class StreamlineAttributes extends AttributeSubject implements Plugin
{
    private static int numAdditionalAttributes = 36;

    // Enum values
    public final static int SOURCETYPE_SPECIFIEDPOINT = 0;
    public final static int SOURCETYPE_SPECIFIEDLINE = 1;
    public final static int SOURCETYPE_SPECIFIEDPLANE = 2;
    public final static int SOURCETYPE_SPECIFIEDSPHERE = 3;
    public final static int SOURCETYPE_SPECIFIEDBOX = 4;
    public final static int SOURCETYPE_SPECIFIEDPOINTLIST = 5;

    public final static int COLORINGMETHOD_SOLID = 0;
    public final static int COLORINGMETHOD_COLORBYSPEED = 1;
    public final static int COLORINGMETHOD_COLORBYVORTICITY = 2;
    public final static int COLORINGMETHOD_COLORBYLENGTH = 3;
    public final static int COLORINGMETHOD_COLORBYTIME = 4;
    public final static int COLORINGMETHOD_COLORBYSEEDPOINTID = 5;
    public final static int COLORINGMETHOD_COLORBYVARIABLE = 6;

    public final static int DISPLAYMETHOD_LINES = 0;
    public final static int DISPLAYMETHOD_TUBES = 1;
    public final static int DISPLAYMETHOD_RIBBONS = 2;

    public final static int INTEGRATIONDIRECTION_FORWARD = 0;
    public final static int INTEGRATIONDIRECTION_BACKWARD = 1;
    public final static int INTEGRATIONDIRECTION_BOTH = 2;

    public final static int TERMINATIONTYPE_DISTANCE = 0;
    public final static int TERMINATIONTYPE_TIME = 1;
    public final static int TERMINATIONTYPE_STEP = 2;

    public final static int STREAMLINEALGORITHMTYPE_LOADONDEMAND = 0;
    public final static int STREAMLINEALGORITHMTYPE_PARALLELSTATICDOMAINS = 1;
    public final static int STREAMLINEALGORITHMTYPE_MASTERSLAVE = 2;

    public final static int INTEGRATIONTYPE_DORMANDPRINCE = 0;
    public final static int INTEGRATIONTYPE_ADAMSBASHFORTH = 1;


    public StreamlineAttributes()
    {
        super(numAdditionalAttributes);

        sourceType = SOURCETYPE_SPECIFIEDPOINT;
        maxStepLength = 0.1;
        termination = 10;
        pointSource = new double[3];
        pointSource[0] = 0;
        pointSource[1] = 0;
        pointSource[2] = 0;
        lineStart = new double[3];
        lineStart[0] = 0;
        lineStart[1] = 0;
        lineStart[2] = 0;
        lineEnd = new double[3];
        lineEnd[0] = 1;
        lineEnd[1] = 0;
        lineEnd[2] = 0;
        planeOrigin = new double[3];
        planeOrigin[0] = 0;
        planeOrigin[1] = 0;
        planeOrigin[2] = 0;
        planeNormal = new double[3];
        planeNormal[0] = 0;
        planeNormal[1] = 0;
        planeNormal[2] = 1;
        planeUpAxis = new double[3];
        planeUpAxis[0] = 0;
        planeUpAxis[1] = 1;
        planeUpAxis[2] = 0;
        planeRadius = 1;
        sphereOrigin = new double[3];
        sphereOrigin[0] = 0;
        sphereOrigin[1] = 0;
        sphereOrigin[2] = 0;
        sphereRadius = 1;
        boxExtents = new double[6];
        boxExtents[0] = 0;
        boxExtents[1] = 1;
        boxExtents[2] = 0;
        boxExtents[3] = 1;
        boxExtents[4] = 0;
        boxExtents[5] = 1;
        useWholeBox = true;
        pointList = new Vector();
        pointList.addElement(new Double(0));
        pointList.addElement(new Double(0));
        pointList.addElement(new Double(0));
        pointList.addElement(new Double(1));
        pointList.addElement(new Double(0));
        pointList.addElement(new Double(0));
        pointList.addElement(new Double(0));
        pointList.addElement(new Double(1));
        pointList.addElement(new Double(0));
        pointDensity = 2;
        displayMethod = DISPLAYMETHOD_LINES;
        showStart = false;
        radius = 0.125;
        lineWidth = 2;
        coloringMethod = COLORINGMETHOD_COLORBYSPEED;
        colorTableName = new String("Default");
        singleColor = new ColorAttribute(0, 0, 0);
        legendFlag = true;
        lightingFlag = true;
        StreamlineDirection = INTEGRATIONDIRECTION_FORWARD;
        relTol = 0.0001;
        absTol = 1e-05;
        terminationType = TERMINATIONTYPE_DISTANCE;
        integrationType = INTEGRATIONTYPE_DORMANDPRINCE;
        streamlineAlgorithmType = STREAMLINEALGORITHMTYPE_PARALLELSTATICDOMAINS;
        maxStreamlineProcessCount = 10;
        maxDomainCacheSize = 3;
        workGroupSize = 32;
        pathlines = false;
        coloringVariable = new String("");
    }

    public StreamlineAttributes(int nMoreFields)
    {
        super(numAdditionalAttributes + nMoreFields);

        sourceType = SOURCETYPE_SPECIFIEDPOINT;
        maxStepLength = 0.1;
        termination = 10;
        pointSource = new double[3];
        pointSource[0] = 0;
        pointSource[1] = 0;
        pointSource[2] = 0;
        lineStart = new double[3];
        lineStart[0] = 0;
        lineStart[1] = 0;
        lineStart[2] = 0;
        lineEnd = new double[3];
        lineEnd[0] = 1;
        lineEnd[1] = 0;
        lineEnd[2] = 0;
        planeOrigin = new double[3];
        planeOrigin[0] = 0;
        planeOrigin[1] = 0;
        planeOrigin[2] = 0;
        planeNormal = new double[3];
        planeNormal[0] = 0;
        planeNormal[1] = 0;
        planeNormal[2] = 1;
        planeUpAxis = new double[3];
        planeUpAxis[0] = 0;
        planeUpAxis[1] = 1;
        planeUpAxis[2] = 0;
        planeRadius = 1;
        sphereOrigin = new double[3];
        sphereOrigin[0] = 0;
        sphereOrigin[1] = 0;
        sphereOrigin[2] = 0;
        sphereRadius = 1;
        boxExtents = new double[6];
        boxExtents[0] = 0;
        boxExtents[1] = 1;
        boxExtents[2] = 0;
        boxExtents[3] = 1;
        boxExtents[4] = 0;
        boxExtents[5] = 1;
        useWholeBox = true;
        pointList = new Vector();
        pointList.addElement(new Double(0));
        pointList.addElement(new Double(0));
        pointList.addElement(new Double(0));
        pointList.addElement(new Double(1));
        pointList.addElement(new Double(0));
        pointList.addElement(new Double(0));
        pointList.addElement(new Double(0));
        pointList.addElement(new Double(1));
        pointList.addElement(new Double(0));
        pointDensity = 2;
        displayMethod = DISPLAYMETHOD_LINES;
        showStart = false;
        radius = 0.125;
        lineWidth = 2;
        coloringMethod = COLORINGMETHOD_COLORBYSPEED;
        colorTableName = new String("Default");
        singleColor = new ColorAttribute(0, 0, 0);
        legendFlag = true;
        lightingFlag = true;
        StreamlineDirection = INTEGRATIONDIRECTION_FORWARD;
        relTol = 0.0001;
        absTol = 1e-05;
        terminationType = TERMINATIONTYPE_DISTANCE;
        integrationType = INTEGRATIONTYPE_DORMANDPRINCE;
        streamlineAlgorithmType = STREAMLINEALGORITHMTYPE_PARALLELSTATICDOMAINS;
        maxStreamlineProcessCount = 10;
        maxDomainCacheSize = 3;
        workGroupSize = 32;
        pathlines = false;
        coloringVariable = new String("");
    }

    public StreamlineAttributes(StreamlineAttributes obj)
    {
        super(numAdditionalAttributes);

        int i;

        sourceType = obj.sourceType;
        maxStepLength = obj.maxStepLength;
        termination = obj.termination;
        pointSource = new double[3];
        pointSource[0] = obj.pointSource[0];
        pointSource[1] = obj.pointSource[1];
        pointSource[2] = obj.pointSource[2];

        lineStart = new double[3];
        lineStart[0] = obj.lineStart[0];
        lineStart[1] = obj.lineStart[1];
        lineStart[2] = obj.lineStart[2];

        lineEnd = new double[3];
        lineEnd[0] = obj.lineEnd[0];
        lineEnd[1] = obj.lineEnd[1];
        lineEnd[2] = obj.lineEnd[2];

        planeOrigin = new double[3];
        planeOrigin[0] = obj.planeOrigin[0];
        planeOrigin[1] = obj.planeOrigin[1];
        planeOrigin[2] = obj.planeOrigin[2];

        planeNormal = new double[3];
        planeNormal[0] = obj.planeNormal[0];
        planeNormal[1] = obj.planeNormal[1];
        planeNormal[2] = obj.planeNormal[2];

        planeUpAxis = new double[3];
        planeUpAxis[0] = obj.planeUpAxis[0];
        planeUpAxis[1] = obj.planeUpAxis[1];
        planeUpAxis[2] = obj.planeUpAxis[2];

        planeRadius = obj.planeRadius;
        sphereOrigin = new double[3];
        sphereOrigin[0] = obj.sphereOrigin[0];
        sphereOrigin[1] = obj.sphereOrigin[1];
        sphereOrigin[2] = obj.sphereOrigin[2];

        sphereRadius = obj.sphereRadius;
        boxExtents = new double[6];
        for(i = 0; i < obj.boxExtents.length; ++i)
            boxExtents[i] = obj.boxExtents[i];

        useWholeBox = obj.useWholeBox;
        pointList = new Vector(obj.pointList.size());
        for(i = 0; i < obj.pointList.size(); ++i)
        {
            Double dv = (Double)obj.pointList.elementAt(i);
            pointList.addElement(new Double(dv.doubleValue()));
        }

        pointDensity = obj.pointDensity;
        displayMethod = obj.displayMethod;
        showStart = obj.showStart;
        radius = obj.radius;
        lineWidth = obj.lineWidth;
        coloringMethod = obj.coloringMethod;
        colorTableName = new String(obj.colorTableName);
        singleColor = new ColorAttribute(obj.singleColor);
        legendFlag = obj.legendFlag;
        lightingFlag = obj.lightingFlag;
        StreamlineDirection = obj.StreamlineDirection;
        relTol = obj.relTol;
        absTol = obj.absTol;
        terminationType = obj.terminationType;
        integrationType = obj.integrationType;
        streamlineAlgorithmType = obj.streamlineAlgorithmType;
        maxStreamlineProcessCount = obj.maxStreamlineProcessCount;
        maxDomainCacheSize = obj.maxDomainCacheSize;
        workGroupSize = obj.workGroupSize;
        pathlines = obj.pathlines;
        coloringVariable = new String(obj.coloringVariable);

        SelectAll();
    }

    public int Offset()
    {
        return super.Offset() + super.GetNumAdditionalAttributes();
    }

    public int GetNumAdditionalAttributes()
    {
        return numAdditionalAttributes;
    }

    public boolean equals(StreamlineAttributes obj)
    {
        int i;

        // Compare the pointSource arrays.
        boolean pointSource_equal = true;
        for(i = 0; i < 3 && pointSource_equal; ++i)
            pointSource_equal = (pointSource[i] == obj.pointSource[i]);

        // Compare the lineStart arrays.
        boolean lineStart_equal = true;
        for(i = 0; i < 3 && lineStart_equal; ++i)
            lineStart_equal = (lineStart[i] == obj.lineStart[i]);

        // Compare the lineEnd arrays.
        boolean lineEnd_equal = true;
        for(i = 0; i < 3 && lineEnd_equal; ++i)
            lineEnd_equal = (lineEnd[i] == obj.lineEnd[i]);

        // Compare the planeOrigin arrays.
        boolean planeOrigin_equal = true;
        for(i = 0; i < 3 && planeOrigin_equal; ++i)
            planeOrigin_equal = (planeOrigin[i] == obj.planeOrigin[i]);

        // Compare the planeNormal arrays.
        boolean planeNormal_equal = true;
        for(i = 0; i < 3 && planeNormal_equal; ++i)
            planeNormal_equal = (planeNormal[i] == obj.planeNormal[i]);

        // Compare the planeUpAxis arrays.
        boolean planeUpAxis_equal = true;
        for(i = 0; i < 3 && planeUpAxis_equal; ++i)
            planeUpAxis_equal = (planeUpAxis[i] == obj.planeUpAxis[i]);

        // Compare the sphereOrigin arrays.
        boolean sphereOrigin_equal = true;
        for(i = 0; i < 3 && sphereOrigin_equal; ++i)
            sphereOrigin_equal = (sphereOrigin[i] == obj.sphereOrigin[i]);

        // Compare the boxExtents arrays.
        boolean boxExtents_equal = true;
        for(i = 0; i < 6 && boxExtents_equal; ++i)
            boxExtents_equal = (boxExtents[i] == obj.boxExtents[i]);

        // Compare the elements in the pointList vector.
        boolean pointList_equal = (obj.pointList.size() == pointList.size());
        for(i = 0; (i < pointList.size()) && pointList_equal; ++i)
        {
            // Make references to Double from Object.
            Double pointList1 = (Double)pointList.elementAt(i);
            Double pointList2 = (Double)obj.pointList.elementAt(i);
            pointList_equal = pointList1.equals(pointList2);
        }
        // Create the return value
        return ((sourceType == obj.sourceType) &&
                (maxStepLength == obj.maxStepLength) &&
                (termination == obj.termination) &&
                pointSource_equal &&
                lineStart_equal &&
                lineEnd_equal &&
                planeOrigin_equal &&
                planeNormal_equal &&
                planeUpAxis_equal &&
                (planeRadius == obj.planeRadius) &&
                sphereOrigin_equal &&
                (sphereRadius == obj.sphereRadius) &&
                boxExtents_equal &&
                (useWholeBox == obj.useWholeBox) &&
                pointList_equal &&
                (pointDensity == obj.pointDensity) &&
                (displayMethod == obj.displayMethod) &&
                (showStart == obj.showStart) &&
                (radius == obj.radius) &&
                (lineWidth == obj.lineWidth) &&
                (coloringMethod == obj.coloringMethod) &&
                (colorTableName.equals(obj.colorTableName)) &&
                (singleColor == obj.singleColor) &&
                (legendFlag == obj.legendFlag) &&
                (lightingFlag == obj.lightingFlag) &&
                (StreamlineDirection == obj.StreamlineDirection) &&
                (relTol == obj.relTol) &&
                (absTol == obj.absTol) &&
                (terminationType == obj.terminationType) &&
                (integrationType == obj.integrationType) &&
                (streamlineAlgorithmType == obj.streamlineAlgorithmType) &&
                (maxStreamlineProcessCount == obj.maxStreamlineProcessCount) &&
                (maxDomainCacheSize == obj.maxDomainCacheSize) &&
                (workGroupSize == obj.workGroupSize) &&
                (pathlines == obj.pathlines) &&
                (coloringVariable.equals(obj.coloringVariable)));
    }

    public String GetName() { return "Streamline"; }
    public String GetVersion() { return "1.0"; }

    // Property setting methods
    public void SetSourceType(int sourceType_)
    {
        sourceType = sourceType_;
        Select(0);
    }

    public void SetMaxStepLength(double maxStepLength_)
    {
        maxStepLength = maxStepLength_;
        Select(1);
    }

    public void SetTermination(double termination_)
    {
        termination = termination_;
        Select(2);
    }

    public void SetPointSource(double[] pointSource_)
    {
        pointSource[0] = pointSource_[0];
        pointSource[1] = pointSource_[1];
        pointSource[2] = pointSource_[2];
        Select(3);
    }

    public void SetPointSource(double e0, double e1, double e2)
    {
        pointSource[0] = e0;
        pointSource[1] = e1;
        pointSource[2] = e2;
        Select(3);
    }

    public void SetLineStart(double[] lineStart_)
    {
        lineStart[0] = lineStart_[0];
        lineStart[1] = lineStart_[1];
        lineStart[2] = lineStart_[2];
        Select(4);
    }

    public void SetLineStart(double e0, double e1, double e2)
    {
        lineStart[0] = e0;
        lineStart[1] = e1;
        lineStart[2] = e2;
        Select(4);
    }

    public void SetLineEnd(double[] lineEnd_)
    {
        lineEnd[0] = lineEnd_[0];
        lineEnd[1] = lineEnd_[1];
        lineEnd[2] = lineEnd_[2];
        Select(5);
    }

    public void SetLineEnd(double e0, double e1, double e2)
    {
        lineEnd[0] = e0;
        lineEnd[1] = e1;
        lineEnd[2] = e2;
        Select(5);
    }

    public void SetPlaneOrigin(double[] planeOrigin_)
    {
        planeOrigin[0] = planeOrigin_[0];
        planeOrigin[1] = planeOrigin_[1];
        planeOrigin[2] = planeOrigin_[2];
        Select(6);
    }

    public void SetPlaneOrigin(double e0, double e1, double e2)
    {
        planeOrigin[0] = e0;
        planeOrigin[1] = e1;
        planeOrigin[2] = e2;
        Select(6);
    }

    public void SetPlaneNormal(double[] planeNormal_)
    {
        planeNormal[0] = planeNormal_[0];
        planeNormal[1] = planeNormal_[1];
        planeNormal[2] = planeNormal_[2];
        Select(7);
    }

    public void SetPlaneNormal(double e0, double e1, double e2)
    {
        planeNormal[0] = e0;
        planeNormal[1] = e1;
        planeNormal[2] = e2;
        Select(7);
    }

    public void SetPlaneUpAxis(double[] planeUpAxis_)
    {
        planeUpAxis[0] = planeUpAxis_[0];
        planeUpAxis[1] = planeUpAxis_[1];
        planeUpAxis[2] = planeUpAxis_[2];
        Select(8);
    }

    public void SetPlaneUpAxis(double e0, double e1, double e2)
    {
        planeUpAxis[0] = e0;
        planeUpAxis[1] = e1;
        planeUpAxis[2] = e2;
        Select(8);
    }

    public void SetPlaneRadius(double planeRadius_)
    {
        planeRadius = planeRadius_;
        Select(9);
    }

    public void SetSphereOrigin(double[] sphereOrigin_)
    {
        sphereOrigin[0] = sphereOrigin_[0];
        sphereOrigin[1] = sphereOrigin_[1];
        sphereOrigin[2] = sphereOrigin_[2];
        Select(10);
    }

    public void SetSphereOrigin(double e0, double e1, double e2)
    {
        sphereOrigin[0] = e0;
        sphereOrigin[1] = e1;
        sphereOrigin[2] = e2;
        Select(10);
    }

    public void SetSphereRadius(double sphereRadius_)
    {
        sphereRadius = sphereRadius_;
        Select(11);
    }

    public void SetBoxExtents(double[] boxExtents_)
    {
        for(int i = 0; i < 6; ++i)
             boxExtents[i] = boxExtents_[i];
        Select(12);
    }

    public void SetUseWholeBox(boolean useWholeBox_)
    {
        useWholeBox = useWholeBox_;
        Select(13);
    }

    public void SetPointList(Vector pointList_)
    {
        pointList = pointList_;
        Select(14);
    }

    public void SetPointDensity(int pointDensity_)
    {
        pointDensity = pointDensity_;
        Select(15);
    }

    public void SetDisplayMethod(int displayMethod_)
    {
        displayMethod = displayMethod_;
        Select(16);
    }

    public void SetShowStart(boolean showStart_)
    {
        showStart = showStart_;
        Select(17);
    }

    public void SetRadius(double radius_)
    {
        radius = radius_;
        Select(18);
    }

    public void SetLineWidth(int lineWidth_)
    {
        lineWidth = lineWidth_;
        Select(19);
    }

    public void SetColoringMethod(int coloringMethod_)
    {
        coloringMethod = coloringMethod_;
        Select(20);
    }

    public void SetColorTableName(String colorTableName_)
    {
        colorTableName = colorTableName_;
        Select(21);
    }

    public void SetSingleColor(ColorAttribute singleColor_)
    {
        singleColor = singleColor_;
        Select(22);
    }

    public void SetLegendFlag(boolean legendFlag_)
    {
        legendFlag = legendFlag_;
        Select(23);
    }

    public void SetLightingFlag(boolean lightingFlag_)
    {
        lightingFlag = lightingFlag_;
        Select(24);
    }

    public void SetStreamlineDirection(int StreamlineDirection_)
    {
        StreamlineDirection = StreamlineDirection_;
        Select(25);
    }

    public void SetRelTol(double relTol_)
    {
        relTol = relTol_;
        Select(26);
    }

    public void SetAbsTol(double absTol_)
    {
        absTol = absTol_;
        Select(27);
    }

    public void SetTerminationType(int terminationType_)
    {
        terminationType = terminationType_;
        Select(28);
    }

    public void SetIntegrationType(int integrationType_)
    {
        integrationType = integrationType_;
        Select(29);
    }

    public void SetStreamlineAlgorithmType(int streamlineAlgorithmType_)
    {
        streamlineAlgorithmType = streamlineAlgorithmType_;
        Select(30);
    }

    public void SetMaxStreamlineProcessCount(int maxStreamlineProcessCount_)
    {
        maxStreamlineProcessCount = maxStreamlineProcessCount_;
        Select(31);
    }

    public void SetMaxDomainCacheSize(int maxDomainCacheSize_)
    {
        maxDomainCacheSize = maxDomainCacheSize_;
        Select(32);
    }

    public void SetWorkGroupSize(int workGroupSize_)
    {
        workGroupSize = workGroupSize_;
        Select(33);
    }

    public void SetPathlines(boolean pathlines_)
    {
        pathlines = pathlines_;
        Select(34);
    }

    public void SetColoringVariable(String coloringVariable_)
    {
        coloringVariable = coloringVariable_;
        Select(35);
    }

    // Property getting methods
    public int            GetSourceType() { return sourceType; }
    public double         GetMaxStepLength() { return maxStepLength; }
    public double         GetTermination() { return termination; }
    public double[]       GetPointSource() { return pointSource; }
    public double[]       GetLineStart() { return lineStart; }
    public double[]       GetLineEnd() { return lineEnd; }
    public double[]       GetPlaneOrigin() { return planeOrigin; }
    public double[]       GetPlaneNormal() { return planeNormal; }
    public double[]       GetPlaneUpAxis() { return planeUpAxis; }
    public double         GetPlaneRadius() { return planeRadius; }
    public double[]       GetSphereOrigin() { return sphereOrigin; }
    public double         GetSphereRadius() { return sphereRadius; }
    public double[]       GetBoxExtents() { return boxExtents; }
    public boolean        GetUseWholeBox() { return useWholeBox; }
    public Vector         GetPointList() { return pointList; }
    public int            GetPointDensity() { return pointDensity; }
    public int            GetDisplayMethod() { return displayMethod; }
    public boolean        GetShowStart() { return showStart; }
    public double         GetRadius() { return radius; }
    public int            GetLineWidth() { return lineWidth; }
    public int            GetColoringMethod() { return coloringMethod; }
    public String         GetColorTableName() { return colorTableName; }
    public ColorAttribute GetSingleColor() { return singleColor; }
    public boolean        GetLegendFlag() { return legendFlag; }
    public boolean        GetLightingFlag() { return lightingFlag; }
    public int            GetStreamlineDirection() { return StreamlineDirection; }
    public double         GetRelTol() { return relTol; }
    public double         GetAbsTol() { return absTol; }
    public int            GetTerminationType() { return terminationType; }
    public int            GetIntegrationType() { return integrationType; }
    public int            GetStreamlineAlgorithmType() { return streamlineAlgorithmType; }
    public int            GetMaxStreamlineProcessCount() { return maxStreamlineProcessCount; }
    public int            GetMaxDomainCacheSize() { return maxDomainCacheSize; }
    public int            GetWorkGroupSize() { return workGroupSize; }
    public boolean        GetPathlines() { return pathlines; }
    public String         GetColoringVariable() { return coloringVariable; }

    // Write and read methods.
    public void WriteAtts(CommunicationBuffer buf)
    {
        if(WriteSelect(0, buf))
            buf.WriteInt(sourceType);
        if(WriteSelect(1, buf))
            buf.WriteDouble(maxStepLength);
        if(WriteSelect(2, buf))
            buf.WriteDouble(termination);
        if(WriteSelect(3, buf))
            buf.WriteDoubleArray(pointSource);
        if(WriteSelect(4, buf))
            buf.WriteDoubleArray(lineStart);
        if(WriteSelect(5, buf))
            buf.WriteDoubleArray(lineEnd);
        if(WriteSelect(6, buf))
            buf.WriteDoubleArray(planeOrigin);
        if(WriteSelect(7, buf))
            buf.WriteDoubleArray(planeNormal);
        if(WriteSelect(8, buf))
            buf.WriteDoubleArray(planeUpAxis);
        if(WriteSelect(9, buf))
            buf.WriteDouble(planeRadius);
        if(WriteSelect(10, buf))
            buf.WriteDoubleArray(sphereOrigin);
        if(WriteSelect(11, buf))
            buf.WriteDouble(sphereRadius);
        if(WriteSelect(12, buf))
            buf.WriteDoubleArray(boxExtents);
        if(WriteSelect(13, buf))
            buf.WriteBool(useWholeBox);
        if(WriteSelect(14, buf))
            buf.WriteDoubleVector(pointList);
        if(WriteSelect(15, buf))
            buf.WriteInt(pointDensity);
        if(WriteSelect(16, buf))
            buf.WriteInt(displayMethod);
        if(WriteSelect(17, buf))
            buf.WriteBool(showStart);
        if(WriteSelect(18, buf))
            buf.WriteDouble(radius);
        if(WriteSelect(19, buf))
            buf.WriteInt(lineWidth);
        if(WriteSelect(20, buf))
            buf.WriteInt(coloringMethod);
        if(WriteSelect(21, buf))
            buf.WriteString(colorTableName);
        if(WriteSelect(22, buf))
            singleColor.Write(buf);
        if(WriteSelect(23, buf))
            buf.WriteBool(legendFlag);
        if(WriteSelect(24, buf))
            buf.WriteBool(lightingFlag);
        if(WriteSelect(25, buf))
            buf.WriteInt(StreamlineDirection);
        if(WriteSelect(26, buf))
            buf.WriteDouble(relTol);
        if(WriteSelect(27, buf))
            buf.WriteDouble(absTol);
        if(WriteSelect(28, buf))
            buf.WriteInt(terminationType);
        if(WriteSelect(29, buf))
            buf.WriteInt(integrationType);
        if(WriteSelect(30, buf))
            buf.WriteInt(streamlineAlgorithmType);
        if(WriteSelect(31, buf))
            buf.WriteInt(maxStreamlineProcessCount);
        if(WriteSelect(32, buf))
            buf.WriteInt(maxDomainCacheSize);
        if(WriteSelect(33, buf))
            buf.WriteInt(workGroupSize);
        if(WriteSelect(34, buf))
            buf.WriteBool(pathlines);
        if(WriteSelect(35, buf))
            buf.WriteString(coloringVariable);
    }

    public void ReadAtts(int index, CommunicationBuffer buf)
    {
        switch(index)
        {
        case 0:
            SetSourceType(buf.ReadInt());
            break;
        case 1:
            SetMaxStepLength(buf.ReadDouble());
            break;
        case 2:
            SetTermination(buf.ReadDouble());
            break;
        case 3:
            SetPointSource(buf.ReadDoubleArray());
            break;
        case 4:
            SetLineStart(buf.ReadDoubleArray());
            break;
        case 5:
            SetLineEnd(buf.ReadDoubleArray());
            break;
        case 6:
            SetPlaneOrigin(buf.ReadDoubleArray());
            break;
        case 7:
            SetPlaneNormal(buf.ReadDoubleArray());
            break;
        case 8:
            SetPlaneUpAxis(buf.ReadDoubleArray());
            break;
        case 9:
            SetPlaneRadius(buf.ReadDouble());
            break;
        case 10:
            SetSphereOrigin(buf.ReadDoubleArray());
            break;
        case 11:
            SetSphereRadius(buf.ReadDouble());
            break;
        case 12:
            SetBoxExtents(buf.ReadDoubleArray());
            break;
        case 13:
            SetUseWholeBox(buf.ReadBool());
            break;
        case 14:
            SetPointList(buf.ReadDoubleVector());
            break;
        case 15:
            SetPointDensity(buf.ReadInt());
            break;
        case 16:
            SetDisplayMethod(buf.ReadInt());
            break;
        case 17:
            SetShowStart(buf.ReadBool());
            break;
        case 18:
            SetRadius(buf.ReadDouble());
            break;
        case 19:
            SetLineWidth(buf.ReadInt());
            break;
        case 20:
            SetColoringMethod(buf.ReadInt());
            break;
        case 21:
            SetColorTableName(buf.ReadString());
            break;
        case 22:
            singleColor.Read(buf);
            Select(22);
            break;
        case 23:
            SetLegendFlag(buf.ReadBool());
            break;
        case 24:
            SetLightingFlag(buf.ReadBool());
            break;
        case 25:
            SetStreamlineDirection(buf.ReadInt());
            break;
        case 26:
            SetRelTol(buf.ReadDouble());
            break;
        case 27:
            SetAbsTol(buf.ReadDouble());
            break;
        case 28:
            SetTerminationType(buf.ReadInt());
            break;
        case 29:
            SetIntegrationType(buf.ReadInt());
            break;
        case 30:
            SetStreamlineAlgorithmType(buf.ReadInt());
            break;
        case 31:
            SetMaxStreamlineProcessCount(buf.ReadInt());
            break;
        case 32:
            SetMaxDomainCacheSize(buf.ReadInt());
            break;
        case 33:
            SetWorkGroupSize(buf.ReadInt());
            break;
        case 34:
            SetPathlines(buf.ReadBool());
            break;
        case 35:
            SetColoringVariable(buf.ReadString());
            break;
        }
    }

    public String toString(String indent)
    {
        String str = new String();
        str = str + indent + "sourceType = ";
        if(sourceType == SOURCETYPE_SPECIFIEDPOINT)
            str = str + "SOURCETYPE_SPECIFIEDPOINT";
        if(sourceType == SOURCETYPE_SPECIFIEDLINE)
            str = str + "SOURCETYPE_SPECIFIEDLINE";
        if(sourceType == SOURCETYPE_SPECIFIEDPLANE)
            str = str + "SOURCETYPE_SPECIFIEDPLANE";
        if(sourceType == SOURCETYPE_SPECIFIEDSPHERE)
            str = str + "SOURCETYPE_SPECIFIEDSPHERE";
        if(sourceType == SOURCETYPE_SPECIFIEDBOX)
            str = str + "SOURCETYPE_SPECIFIEDBOX";
        if(sourceType == SOURCETYPE_SPECIFIEDPOINTLIST)
            str = str + "SOURCETYPE_SPECIFIEDPOINTLIST";
        str = str + "\n";
        str = str + doubleToString("maxStepLength", maxStepLength, indent) + "\n";
        str = str + doubleToString("termination", termination, indent) + "\n";
        str = str + doubleArrayToString("pointSource", pointSource, indent) + "\n";
        str = str + doubleArrayToString("lineStart", lineStart, indent) + "\n";
        str = str + doubleArrayToString("lineEnd", lineEnd, indent) + "\n";
        str = str + doubleArrayToString("planeOrigin", planeOrigin, indent) + "\n";
        str = str + doubleArrayToString("planeNormal", planeNormal, indent) + "\n";
        str = str + doubleArrayToString("planeUpAxis", planeUpAxis, indent) + "\n";
        str = str + doubleToString("planeRadius", planeRadius, indent) + "\n";
        str = str + doubleArrayToString("sphereOrigin", sphereOrigin, indent) + "\n";
        str = str + doubleToString("sphereRadius", sphereRadius, indent) + "\n";
        str = str + doubleArrayToString("boxExtents", boxExtents, indent) + "\n";
        str = str + boolToString("useWholeBox", useWholeBox, indent) + "\n";
        str = str + doubleVectorToString("pointList", pointList, indent) + "\n";
        str = str + intToString("pointDensity", pointDensity, indent) + "\n";
        str = str + indent + "displayMethod = ";
        if(displayMethod == DISPLAYMETHOD_LINES)
            str = str + "DISPLAYMETHOD_LINES";
        if(displayMethod == DISPLAYMETHOD_TUBES)
            str = str + "DISPLAYMETHOD_TUBES";
        if(displayMethod == DISPLAYMETHOD_RIBBONS)
            str = str + "DISPLAYMETHOD_RIBBONS";
        str = str + "\n";
        str = str + boolToString("showStart", showStart, indent) + "\n";
        str = str + doubleToString("radius", radius, indent) + "\n";
        str = str + intToString("lineWidth", lineWidth, indent) + "\n";
        str = str + indent + "coloringMethod = ";
        if(coloringMethod == COLORINGMETHOD_SOLID)
            str = str + "COLORINGMETHOD_SOLID";
        if(coloringMethod == COLORINGMETHOD_COLORBYSPEED)
            str = str + "COLORINGMETHOD_COLORBYSPEED";
        if(coloringMethod == COLORINGMETHOD_COLORBYVORTICITY)
            str = str + "COLORINGMETHOD_COLORBYVORTICITY";
        if(coloringMethod == COLORINGMETHOD_COLORBYLENGTH)
            str = str + "COLORINGMETHOD_COLORBYLENGTH";
        if(coloringMethod == COLORINGMETHOD_COLORBYTIME)
            str = str + "COLORINGMETHOD_COLORBYTIME";
        if(coloringMethod == COLORINGMETHOD_COLORBYSEEDPOINTID)
            str = str + "COLORINGMETHOD_COLORBYSEEDPOINTID";
        if(coloringMethod == COLORINGMETHOD_COLORBYVARIABLE)
            str = str + "COLORINGMETHOD_COLORBYVARIABLE";
        str = str + "\n";
        str = str + stringToString("colorTableName", colorTableName, indent) + "\n";
        str = str + indent + "singleColor = {" + singleColor.Red() + ", " + singleColor.Green() + ", " + singleColor.Blue() + ", " + singleColor.Alpha() + "}\n";
        str = str + boolToString("legendFlag", legendFlag, indent) + "\n";
        str = str + boolToString("lightingFlag", lightingFlag, indent) + "\n";
        str = str + indent + "StreamlineDirection = ";
        if(StreamlineDirection == INTEGRATIONDIRECTION_FORWARD)
            str = str + "INTEGRATIONDIRECTION_FORWARD";
        if(StreamlineDirection == INTEGRATIONDIRECTION_BACKWARD)
            str = str + "INTEGRATIONDIRECTION_BACKWARD";
        if(StreamlineDirection == INTEGRATIONDIRECTION_BOTH)
            str = str + "INTEGRATIONDIRECTION_BOTH";
        str = str + "\n";
        str = str + doubleToString("relTol", relTol, indent) + "\n";
        str = str + doubleToString("absTol", absTol, indent) + "\n";
        str = str + indent + "terminationType = ";
        if(terminationType == TERMINATIONTYPE_DISTANCE)
            str = str + "TERMINATIONTYPE_DISTANCE";
        if(terminationType == TERMINATIONTYPE_TIME)
            str = str + "TERMINATIONTYPE_TIME";
        if(terminationType == TERMINATIONTYPE_STEP)
            str = str + "TERMINATIONTYPE_STEP";
        str = str + "\n";
        str = str + indent + "integrationType = ";
        if(integrationType == INTEGRATIONTYPE_DORMANDPRINCE)
            str = str + "INTEGRATIONTYPE_DORMANDPRINCE";
        if(integrationType == INTEGRATIONTYPE_ADAMSBASHFORTH)
            str = str + "INTEGRATIONTYPE_ADAMSBASHFORTH";
        str = str + "\n";
        str = str + indent + "streamlineAlgorithmType = ";
        if(streamlineAlgorithmType == STREAMLINEALGORITHMTYPE_LOADONDEMAND)
            str = str + "STREAMLINEALGORITHMTYPE_LOADONDEMAND";
        if(streamlineAlgorithmType == STREAMLINEALGORITHMTYPE_PARALLELSTATICDOMAINS)
            str = str + "STREAMLINEALGORITHMTYPE_PARALLELSTATICDOMAINS";
        if(streamlineAlgorithmType == STREAMLINEALGORITHMTYPE_MASTERSLAVE)
            str = str + "STREAMLINEALGORITHMTYPE_MASTERSLAVE";
        str = str + "\n";
        str = str + intToString("maxStreamlineProcessCount", maxStreamlineProcessCount, indent) + "\n";
        str = str + intToString("maxDomainCacheSize", maxDomainCacheSize, indent) + "\n";
        str = str + intToString("workGroupSize", workGroupSize, indent) + "\n";
        str = str + boolToString("pathlines", pathlines, indent) + "\n";
        str = str + stringToString("coloringVariable", coloringVariable, indent) + "\n";
        return str;
    }


    // Attributes
    private int            sourceType;
    private double         maxStepLength;
    private double         termination;
    private double[]       pointSource;
    private double[]       lineStart;
    private double[]       lineEnd;
    private double[]       planeOrigin;
    private double[]       planeNormal;
    private double[]       planeUpAxis;
    private double         planeRadius;
    private double[]       sphereOrigin;
    private double         sphereRadius;
    private double[]       boxExtents;
    private boolean        useWholeBox;
    private Vector         pointList; // vector of Double objects
    private int            pointDensity;
    private int            displayMethod;
    private boolean        showStart;
    private double         radius;
    private int            lineWidth;
    private int            coloringMethod;
    private String         colorTableName;
    private ColorAttribute singleColor;
    private boolean        legendFlag;
    private boolean        lightingFlag;
    private int            StreamlineDirection;
    private double         relTol;
    private double         absTol;
    private int            terminationType;
    private int            integrationType;
    private int            streamlineAlgorithmType;
    private int            maxStreamlineProcessCount;
    private int            maxDomainCacheSize;
    private int            workGroupSize;
    private boolean        pathlines;
    private String         coloringVariable;
}

