#pragma once

#include <vector>
#include <ostream>

class PhoneNumber {
    public:
    PhoneNumber(int a, int b, int c, int d, int e)
        : _numbers { a, b, c, d, e } 
        {}

    bool is_valid() const;

    int operator[](int index) const;

    friend std::ostream& operator<<(std::ostream& stream, const PhoneNumber& pn);

    private:
    std::vector<int> _numbers;
};