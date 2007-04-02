// ************************************************************************* //
//                        avtPickByZoneQuery.h                               //
// ************************************************************************* //

#ifndef AVT_PICKBYZONE_QUERY_H
#define AVT_PICKBYZONE_QUERY_H
#include <query_exports.h>

#include <avtPickQuery.h>



// ****************************************************************************
//  Class: avtPickByZoneQuery
//
//  Purpose:
//    This query gathers information about a cell picked by the user. 
//
//  Programmer: Kathleen Bonnell 
//  Creation:   November 15, 2002 
//
//  Modifications:
//    Kathleen Bonnell, Tue Nov  8 10:45:43 PST 2005
//    Added avtDataAttributes arg to Preparation.
//    
// ****************************************************************************

class QUERY_API avtPickByZoneQuery : public avtPickQuery
{
  public:
                                    avtPickByZoneQuery();
    virtual                        ~avtPickByZoneQuery();


    virtual const char             *GetType(void)
                                             { return "avtPickByZoneQuery"; };

    virtual void                    SetTransform(const avtMatrix *m);

  protected:

    virtual void                    Execute(vtkDataSet *, const int);
    virtual void                    Preparation(const avtDataAttributes &);
};


#endif


