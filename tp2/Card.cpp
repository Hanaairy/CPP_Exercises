#include "Card.hpp"
#include <string>
#include <iomanip>
#include <iostream>

Card::Card(unsigned int value, std::string color):
    _value{ value },
    _color{ color } 
    {};

unsigned int Card::get_value() const {
    return _value;
}

std::string Card::get_color() const {
    return _color;
}

// ajouter const après le nom de la fct sert à dire qu'on peut appliquer cette méthode sur un objet const
void Card::print() const {
    std::cout << get_value() << " de " << get_color() << std::endl;
}

bool Card::operator==(const Card& other) const {
    return _value == other._value;
}

bool Card::operator<(const Card& other) const {
    return _value < other._value;
}

std::ostream& operator<<(std::ostream& stream, const Card& card) {
        stream << card.get_value() << " de " << card.get_color();
    return stream;
}

