#include <sstream>
#include <cstddef>
#include <disenum/der_iff_type_4_fop_modifier.h>

namespace DIS {

namespace der_iff_type_4_fop_modifier {

  bitmask& bitmask::operator=(const uint8_t& i) {
    (*this) = *( reinterpret_cast<bitmask *> (const_cast<uint8_t*>(&i))) ;
	  return (*this);
  }

  bitmask::bitmask(const uint8_t& i) {
    (*this) = i ;
  }

  bitmask::bitmask() {
    (*this) = (uint8_t) 0;
  }

  uint8_t bitmask::getValue(){
    uint8_t val = *( reinterpret_cast<uint8_t *> (this));
    return val;
  }

  void bitmask::setValue(const uint8_t& i){
	  (*this) = i;
  }




}; /* namespace der_iff_type_4_fop_modifier */

} /* namespace DIS */
