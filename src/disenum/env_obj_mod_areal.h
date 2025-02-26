#ifndef ENV_OBJ_MOD_AREAL__H
#define ENV_OBJ_MOD_AREAL__H

#include <string>
#include <disenum/Enumeration.h>

namespace DIS {

namespace env_obj_mod_areal {

	/** Bitmask declaration **/
	struct bitmask {
    unsigned int Location:1;
    unsigned int unused:7;

    bitmask& operator=(const uint8_t& i);
	  bitmask(const uint8_t& i);
	  bitmask();
	  uint8_t getValue();
	  void  setValue(const uint8_t& i);
	};

	/** Enumerations declaration **/
	class Location : public Enumeration {
  public:
    static Location NO_LOCATIONS_HAVE_BEEN_MODIFIED;
    static Location LOCATIONS_HAVE_BEEN_MODIFIED;

		/** Returns the string description associated with the enumerated instance with this value.
		 * If there is no enumerated instance for this value, the string Invalid enumeration: <val> is returned.     */
		static std::string getDescriptionForValue(int aVal);

		/** Returns the enumerated instance with this value.
		 * If there is no enumerated instance for this value, the exception is thrown.     */
		static Location getEnumerationForValue(int aVal) throw(EnumException);

		/** Returns true if there is an enumerated instance for this value, false otherwise. */
		static bool enumerationForValueExists(int aVal);

		typedef hashMap<int,Location*> enumContainer;
		static enumContainer getEnumerations();

		/** Returns the start bit number for this subfield */
		static short  getStartBit() { return startBit; };

		/** Returns the end bit number for this subfield */
		static short  getEndBit()   { return endBit;   };


	private:
		/** Constructor */
		Location(int value, std::string description);

		static Location* findEnumeration(int aVal);
		static enumContainer enumerations;

		static short startBit;
		static short endBit;

	};  /* Location */




}; /* namespace env_obj_mod_areal */

}  /* namespace DIS */

#endif /* ENV_OBJ_MOD_AREAL__H */
