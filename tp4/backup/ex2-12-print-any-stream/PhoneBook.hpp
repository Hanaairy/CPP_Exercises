#pragma once
#include "PhoneBookEntry.hpp"
#include <string>
#include <list>

class PhoneBook {
    public:

    bool add_entry(const PhoneBookEntry& pbe);

    const PhoneNumber* get_number(const std::string& name);

    private:

    std::list<PhoneBookEntry> _book;
};