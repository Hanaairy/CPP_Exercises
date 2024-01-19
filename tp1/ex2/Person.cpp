#include <string>
#include "Person.hpp"

Person::Person(std::string firstname, std::string surname)
    : first_name{ firstname }
    , surname{ surname } {
};

std::string Person::get_surname() {
    return surname;
}

std::string Person::get_firstname() {
    return first_name;
}