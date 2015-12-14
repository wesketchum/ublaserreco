/**
 * \file LaserAlgs.h
 *
 * 
 * \brief Little sample program for establishing a user analysis space.
 *
 * @author wketchum
*/

#ifndef TEST_USERANALYSIS_H
#define TEST_USERANALYSIS_H

#include <string>

#include "TTree.h"

namespace laser{
  class LaserAlgs;
}

class laser::LaserAlgs{
  
public:
  
  /// Default constructor
  LaserAlgs();

  /// Default destructor
  virtual ~LaserAlgs(){};

  void RunAnalysis();
  void SetupOutputTree(TTree*);
  
 private:

  std::string fAlgName;
  TTree*      fTree;
  
  void PrintInfo();

  
};

#endif
