// ************************************************************************* //
//                             avtMTSDFileFormat.h                           //
// ************************************************************************* //

#ifndef AVT_MTSD_FILE_FORMAT_H
#define AVT_MTSD_FILE_FORMAT_H

#include <database_exports.h>

#include <avtFileFormat.h>

#include <vector>

#include <void_ref_ptr.h>


class     vtkDataSet;
class     vtkDataArray;

class     avtIOInformation;


// ****************************************************************************
//  Class: avtMTSDFileFormat
//
//  Purpose:
//      This is an implementation of avtFileFormat for file formats that have
//      Multiple Timesteps and a Single Domain.
//
//  Programmer: Hank Childs
//  Creation:   February 23, 2001
//
//  Modifications:
//
//    Hank Childs, Mon Mar 11 08:48:41 PST 2002
//    Removed SetDatabaseMetaData since it is defined in the base class.
//
//    Kathleen Bonnell, Mon Mar 18 17:15:28 PST 2002  
//    vtkScalars and vtkVectors have been deprecated in VTK 4.0, 
//    use vtkDataArray instead.
//
//    Kathleen Bonnell, Mon Mar 18 17:15:28 PST 2002  
//    vtkScalars and vtkVectors have been deprecated in VTK 4.0, 
//    use vtkDataArray instead.
//
//    Brad Whitlock, Mon Oct 13 14:14:21 PST 2003
//    Added a method to get the times.
//
//    Mark C. Miller, Mon Feb 23 20:38:47 PST 2004
//    Added method, ActivateTimestep
//
//    Mark C. Miller, Tue Mar 16 14:28:42 PST 2004
//    Added method, PopulateIOInformation
//
//    Hank Childs, Mon Aug 16 16:22:56 PDT 2004
//    Allow for the domain to be set.
//
// ****************************************************************************

class DATABASE_API avtMTSDFileFormat : public avtFileFormat
{
  public:
                           avtMTSDFileFormat(const char * const *, int);
    virtual               ~avtMTSDFileFormat();

    virtual void          *GetAuxiliaryData(const char *var, int,
                                            const char *type, void *args,
                                            DestructorFunction &);

    void                   SetDomain(int d) { myDomain = d; };

    virtual void           GetCycles(std::vector<int> &);
    virtual void           GetTimes(std::vector<double> &);
    virtual int            GetNTimesteps(void);

    virtual const char    *GetFilename(void) { return filenames[0]; };

    virtual vtkDataSet    *GetMesh(int, const char *) = 0;
    virtual vtkDataArray  *GetVar(int, const char *) = 0;
    virtual vtkDataArray  *GetVectorVar(int, const char *);

    virtual void           ActivateTimestep(int ts)
                               { avtFileFormat::ActivateTimestep(); };
    virtual void           PopulateIOInformation(int ts, avtIOInformation& ioInfo)
                               { avtFileFormat::PopulateIOInformation(ioInfo); };
  protected:
    char                 **filenames;
    int                    nFiles;
    int                    myDomain;

    int                    AddFile(const char *);
    static const int       MAX_FILES;
};


#endif


