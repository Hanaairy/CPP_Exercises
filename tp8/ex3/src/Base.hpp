#pragma once

#include <string>
#include <ostream>

class Base
{
    public:
    Base() {}
    Base(std::string type)
        : _type{ type } {
    }

    virtual bool is_null() const = 0;

    virtual std::string to_string() const = 0;

    std::string const& type() const { return _type; };

    bool operator==(const Base& other) {
        if (_type != other.type()) {
            return false;
        }

        return (is_equal(other));
    }

    virtual bool is_equal(const Base& b) const = 0;

    private:
    std::string _type;
};

inline std::ostream& operator<<(std::ostream& stream, const Base& b) {
    return stream << b.to_string();
}