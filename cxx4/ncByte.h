#include "ncType.h"

#ifndef NcByteClass
#define NcByteClass

namespace netCDF
{
  
  /*! Class represents a netCDF atomic Byte type. */
  class NcByte : public NcType
  {
  public: 
    
    /*! equivalence operator */
    bool operator==(const NcByte & rhs);

    /*! storage size */
    int sizeoff();

    ~NcByte();
    
    /*! Constructor */
    NcByte();
  };

  /*! A global instance  of the NcByte class within the netCDF namespace. */
  extern NETCDF_CXX4_EXPORT NcByte ncByte;

}
#endif
