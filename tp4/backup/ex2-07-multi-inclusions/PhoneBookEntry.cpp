#include "PhoneBookEntry.hpp"

#include <string>

const std::string& PhoneBookEntry::get_name() const {
    return _name;
}

const PhoneNumber& PhoneBookEntry::get_number() const {
    return _pn;
}

bool PhoneBookEntry::operator==(const PhoneBookEntry& other) const {
    return _name == other.get_name();
}