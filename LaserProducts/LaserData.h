/** ****************************************************************************
 * @file LaserData.h
 * @brief Definition of basic mixing information
 * @author wketchum@fnal.gov
 * 
 * ****************************************************************************/

#ifndef LASERPRODUCTS_LASERDATA_H
#define LASERPRODUCTS_LASERDATA_H

#include <stdint.h>

namespace laser {

  //This is just gonna be a stupid copy of the basic
  //info contained in the art event for now, as an example.
  class LaserData {

  public:
  LaserData():
    fEvent(0),fSubrun(0),fRun(0) {}
    
#ifndef __GCCXML__
  public:
      
    LaserData(uint32_t e,uint32_t s,uint32_t r)
      {
	fEvent  = e;
	fSubrun = s;
	fRun    = r;
      }    
    
    uint32_t Event()  const ;
    uint32_t SubRun() const ;
    uint32_t Run()    const ;

#endif // !__GCCXML__
  private:
    uint32_t fEvent;
    uint32_t fSubrun;
    uint32_t fRun;
  }; // class LaserData()
  
#ifndef __GCCXML__
  inline uint32_t mix::LaserData::Event()  const { return fEvent;  }
  inline uint32_t mix::LaserData::SubRun() const { return fSubrun; }
  inline uint32_t mix::LaserData::Run()    const { return fRun;    }
#endif // !__GCCXML__
  
} // namespace laser


#endif // LASERPRODUCTS_LASERDATA_H

////////////////////////////////////////////////////////////////////////
