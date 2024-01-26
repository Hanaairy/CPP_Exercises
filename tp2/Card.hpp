#pragma once
#include <string>

class Card {
    public:
    Card(unsigned int value, std::string color);

    unsigned int get_value() const; 
    std::string get_color() const;
    void print() const;
    bool operator==(const Card& other) const;
    bool operator<(const Card& other) const;
    friend std::ostream& operator<<(std::ostream& stream, const Card& card);
    private:
    unsigned int _value; // strictly positive value
    std::string _color;
};
