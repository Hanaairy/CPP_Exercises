#pragma once

#include "PhoneNumber.hpp"
#include <string>

class PhoneBookEntry {
    public:
    PhoneBookEntry(std::string name, PhoneNumber pn)
    : _name { name },
        _pn { pn }
    {}
    
    const std::string& get_name() const;

    const PhoneNumber& get_number() const;

    bool operator==(const PhoneBookEntry& other) const;

    private:
    std::string _name;
    PhoneNumber _pn;
};