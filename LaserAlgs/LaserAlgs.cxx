#ifndef TEST_USERANALYSIS_CXX
#define TEST_USERANALYSIS_CXX

#include "LaserAlgs.hh"
#include <iostream>

laser::LaserAlgs::LaserAlgs()
  : fAlgName("LaserAlgs")
{}

void laser::LaserAlgs::SetupOutputTree(TTree* tfs_tree){
  fTree = tfs_tree;

  std::string title = fAlgName + " Tree";
  fTree->SetObject(fTree->GetName(),title.c_str());
}

void laser::LaserAlgs::RunAnalysis(){
  PrintInfo();
}

void laser::LaserAlgs::PrintInfo(){
  std::cout << "\n================================== LaserAlgs ==========================" << std::endl;
  std::cout << "This is a ub_LaserAlgs class called " << fAlgName << std::endl;
  std::cout << "\tThere is an output tree called "
	    << fTree->GetName() << " (" << fTree->GetTitle() << ")" << std::endl;
  std::cout << "==========================================================================\n" << std::endl;
}

#endif
