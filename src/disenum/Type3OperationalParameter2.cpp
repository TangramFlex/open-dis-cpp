#include <sstream>
#include <cstddef>
#include <disenum/Type3OperationalParameter2.h>

namespace DIS {


hashMap<int,Type3OperationalParameter2*> Type3OperationalParameter2::enumerations;

Type3OperationalParameter2 Type3OperationalParameter2::OTHER(0, "Other");


Type3OperationalParameter2::Type3OperationalParameter2(int value, std::string description) :
  Enumeration(value, description)
{
  enumerations[value] = this;
};

Type3OperationalParameter2* Type3OperationalParameter2::findEnumeration(int aVal) {
  Type3OperationalParameter2* pEnum;

  enumContainer::iterator enumIter = enumerations.find(aVal);
  if (enumIter == enumerations.end()) pEnum = NULL;
  else pEnum = (*enumIter).second;
  return pEnum;
};

std::string Type3OperationalParameter2::getDescriptionForValue(int aVal) {
  Type3OperationalParameter2* pEnum = findEnumeration(aVal);
  if (pEnum) return pEnum->description;
  else {
    std::stringstream ss;
    ss <<  "Invalid enumeration: " << aVal;
    return (ss.str());
  }
};

Type3OperationalParameter2 Type3OperationalParameter2::getEnumerationForValue(int aVal) throw(EnumException) {
  Type3OperationalParameter2* pEnum = findEnumeration(aVal);
  if (pEnum) return (*pEnum);
  else  {
    std::stringstream ss;
    ss << "No enumeration found for value " << aVal << " of enumeration Type3OperationalParameter2";
    throw EnumException("Type3OperationalParameter2", aVal, ss.str());
  }
};

bool Type3OperationalParameter2::enumerationForValueExists(int aVal) {
  Type3OperationalParameter2* pEnum = findEnumeration(aVal);
  if (pEnum) return (true);
  else       return (false);
};

Type3OperationalParameter2::enumContainer Type3OperationalParameter2::getEnumerations() {
  return (enumerations);
};

Type3OperationalParameter2& Type3OperationalParameter2::operator=(const int& aVal) throw(EnumException)
{
	(*this) = getEnumerationForValue(aVal);
	return (*this);
};


}  /* namespace DIS */

