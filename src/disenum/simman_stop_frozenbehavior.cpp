#include <sstream>
#include <cstddef>
#include <disenum/simman_stop_frozenbehavior.h>

namespace DIS {

namespace simman_stop_frozenbehavior {

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

	/*
	 **  Simulationclock implementation **
	 */

	hashMap<int,Simulationclock*> Simulationclock::enumerations;
	short Simulationclock::startBit = 0;
	short Simulationclock::endBit   = 0;



	Simulationclock::Simulationclock(int value, std::string description) :
	  Enumeration(value, description)
	{
	  enumerations[value] = this;
	};

	Simulationclock* Simulationclock::findEnumeration(int aVal) {
	  Simulationclock* pEnum;

	  enumContainer::iterator enumIter = enumerations.find(aVal);
	  if (enumIter == enumerations.end()) pEnum = NULL;
	  else pEnum = (*enumIter).second;
	  return pEnum;
	};

	std::string Simulationclock::getDescriptionForValue(int aVal) {
	  Simulationclock* pEnum = findEnumeration(aVal);
	  if (pEnum) return pEnum->description;
	  else {
		std::stringstream ss;
		ss <<  "Invalid enumeration: " << aVal;
		return (ss.str());
	  }
	};

	Simulationclock Simulationclock::getEnumerationForValue(int aVal) throw(EnumException) {
	  Simulationclock* pEnum = findEnumeration(aVal);
	  if (pEnum) return (*pEnum);
	  else  {
		std::stringstream ss;
		ss << "No enumeration found for value " << aVal << " of enumeration Simulationclock";
		throw EnumException("Simulationclock", aVal, ss.str());
	  }
	};

	bool Simulationclock::enumerationForValueExists(int aVal) {
	  Simulationclock* pEnum = findEnumeration(aVal);
	  if (pEnum) return (true);
	  else       return (false);
	};

	Simulationclock::enumContainer Simulationclock::getEnumerations() {
	  return (enumerations);
	};


	/*
	 **  TransmitPDUs implementation **
	 */

	hashMap<int,TransmitPDUs*> TransmitPDUs::enumerations;
	short TransmitPDUs::startBit = 1;
	short TransmitPDUs::endBit   = 1;



	TransmitPDUs::TransmitPDUs(int value, std::string description) :
	  Enumeration(value, description)
	{
	  enumerations[value] = this;
	};

	TransmitPDUs* TransmitPDUs::findEnumeration(int aVal) {
	  TransmitPDUs* pEnum;

	  enumContainer::iterator enumIter = enumerations.find(aVal);
	  if (enumIter == enumerations.end()) pEnum = NULL;
	  else pEnum = (*enumIter).second;
	  return pEnum;
	};

	std::string TransmitPDUs::getDescriptionForValue(int aVal) {
	  TransmitPDUs* pEnum = findEnumeration(aVal);
	  if (pEnum) return pEnum->description;
	  else {
		std::stringstream ss;
		ss <<  "Invalid enumeration: " << aVal;
		return (ss.str());
	  }
	};

	TransmitPDUs TransmitPDUs::getEnumerationForValue(int aVal) throw(EnumException) {
	  TransmitPDUs* pEnum = findEnumeration(aVal);
	  if (pEnum) return (*pEnum);
	  else  {
		std::stringstream ss;
		ss << "No enumeration found for value " << aVal << " of enumeration TransmitPDUs";
		throw EnumException("TransmitPDUs", aVal, ss.str());
	  }
	};

	bool TransmitPDUs::enumerationForValueExists(int aVal) {
	  TransmitPDUs* pEnum = findEnumeration(aVal);
	  if (pEnum) return (true);
	  else       return (false);
	};

	TransmitPDUs::enumContainer TransmitPDUs::getEnumerations() {
	  return (enumerations);
	};


	/*
	 **  ReceivePDUs implementation **
	 */

	hashMap<int,ReceivePDUs*> ReceivePDUs::enumerations;
	short ReceivePDUs::startBit = 2;
	short ReceivePDUs::endBit   = 2;



	ReceivePDUs::ReceivePDUs(int value, std::string description) :
	  Enumeration(value, description)
	{
	  enumerations[value] = this;
	};

	ReceivePDUs* ReceivePDUs::findEnumeration(int aVal) {
	  ReceivePDUs* pEnum;

	  enumContainer::iterator enumIter = enumerations.find(aVal);
	  if (enumIter == enumerations.end()) pEnum = NULL;
	  else pEnum = (*enumIter).second;
	  return pEnum;
	};

	std::string ReceivePDUs::getDescriptionForValue(int aVal) {
	  ReceivePDUs* pEnum = findEnumeration(aVal);
	  if (pEnum) return pEnum->description;
	  else {
		std::stringstream ss;
		ss <<  "Invalid enumeration: " << aVal;
		return (ss.str());
	  }
	};

	ReceivePDUs ReceivePDUs::getEnumerationForValue(int aVal) throw(EnumException) {
	  ReceivePDUs* pEnum = findEnumeration(aVal);
	  if (pEnum) return (*pEnum);
	  else  {
		std::stringstream ss;
		ss << "No enumeration found for value " << aVal << " of enumeration ReceivePDUs";
		throw EnumException("ReceivePDUs", aVal, ss.str());
	  }
	};

	bool ReceivePDUs::enumerationForValueExists(int aVal) {
	  ReceivePDUs* pEnum = findEnumeration(aVal);
	  if (pEnum) return (true);
	  else       return (false);
	};

	ReceivePDUs::enumContainer ReceivePDUs::getEnumerations() {
	  return (enumerations);
	};





}; /* namespace simman_stop_frozenbehavior */

} /* namespace DIS */
