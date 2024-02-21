#include "PhoneBook.hpp"
#include "PhoneBookEntry.hpp"

bool PhoneBook::add_entry(const PhoneBookEntry& pbe) {
    for (auto b : _book) {
        if (b.get_name() == pbe.get_name()) {
            return false;
        }
    }

    if (pbe.get_number().is_valid()) {
        _book.emplace_back(pbe);
        return true;
    }

    return false;
}

const PhoneNumber* PhoneBook::get_number(const std::string& name) {
    for (const auto& b : _book) {
        if (b.get_name() == name) {
            return &(b.get_number());
        }
    }
    return nullptr;
}