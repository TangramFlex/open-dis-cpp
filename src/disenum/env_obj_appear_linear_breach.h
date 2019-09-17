#ifndef ENV_OBJ_APPEAR_LINEAR_BREACH__H
#define ENV_OBJ_APPEAR_LINEAR_BREACH__H

#include <string>
#include <disenum/Enumeration.h>

namespace DIS {

namespace env_obj_appear_linear_breach {

	/** Bitmask declaration **/
	struct bitmask {
    unsigned int unused:32;

    bitmask& operator=(const unsigned int& i);
	  bitmask(const unsigned int& i);
	  bitmask();
	  unsigned int getValue();
	  void  setValue(const unsigned int& i);
	};

	/** Enumerations declaration **/



}; /* namespace env_obj_appear_linear_breach */

}  /* namespace DIS */

#endif /* ENV_OBJ_APPEAR_LINEAR_BREACH__H */
