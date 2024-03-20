#pragma once

#include "Base.hpp"
#include <sstream>

class DerivedInt : public Base {
    public:
    DerivedInt(int data) :
        Base("Int"),
        _data{ data } {
    }

    int data() { return _data; };

    bool is_null() const override {
        if (_data == 0) {
            return true;
        }
        return false;
    }

    std::string to_string() const override {
        std::stringstream ss;
        ss << _data;
        return ss.str();
    }

    bool is_equal(const Base& b) const override {
        if (b._data == _data) {
            return true;
        }
        return false;
    }

    private:
    int _data = 0;
};