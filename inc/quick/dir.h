
#ifndef _QK_DIR_H_
#define _QK_DIR_H_

#include <quick/string.h>

namespace quick {
////////////////////////////////////////////////////////////////////////////////////////////////////

class directory
{
public:
  static void files(t_constr dir, array<cstring> &subs);
};

////////////////////////////////////////////////////////////////////////////////////////////////////
}
#endif
// END
