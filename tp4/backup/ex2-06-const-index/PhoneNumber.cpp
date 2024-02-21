#include "PhoneNumber.hpp"


bool PhoneNumber::is_valid() const {
    for (auto number : _numbers) {
        if (number > 99 || number < 0) {
            return false;
        }
    }
    return true;
}

int PhoneNumber::operator[](int index) const {
    if (index >= _numbers.capacity() || index < 0) {
        return -1;
    }
    return _numbers[index];
}

std::ostream& operator<<(std::ostream& stream, const PhoneNumber& pn) {
    for (int i = 0; i < pn._numbers.capacity(); i++) {
        stream << ((pn._numbers[i] > 10) ? "" : "0") << pn._numbers[i];
    }

    return stream;
}