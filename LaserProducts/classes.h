//
// Build a dictionary.
//
// $Id: classes.h,v 1.8 2010/04/12 18:12:28  Exp $
// $Author:  $
// $Date: 2010/04/12 18:12:28 $
// 
// Original author Rob Kutschke, modified by wes
//

#include "art/Persistency/Common/Wrapper.h"
#include "LaserProducts/LaserData.h"
#include <vector>

//
// Only include objects that we would like to be able to put into the event.
// Do not include the objects they contain internally.
//

template class std::vector<laser::LaserData>;
template class art::Wrapper< std::vector<laser::LaserData> >;
