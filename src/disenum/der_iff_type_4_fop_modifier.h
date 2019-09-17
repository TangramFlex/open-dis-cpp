#ifndef DER_IFF_TYPE_4_FOP_MODIFIER__H
#define DER_IFF_TYPE_4_FOP_MODIFIER__H

#include <string>
#include <disenum/Enumeration.h>

namespace DIS {

namespace der_iff_type_4_fop_modifier {

	/** Bitmask declaration **/
	struct bitmask {
    unsigned int unused:8;

    bitmask& operator=(const uint8_t& i);
	  bitmask(const uint8_t& i);
	  bitmask();
	  uint8_t getValue();
	  void  setValue(const uint8_t& i);
	};

	/** Enumerations declaration **/



}; /* namespace der_iff_type_4_fop_modifier */

}  /* namespace DIS */

#endif /* DER_IFF_TYPE_4_FOP_MODIFIER__H */
