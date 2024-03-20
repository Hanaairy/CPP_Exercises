#pragma once

#include "Base.hpp"
#include <string>

class DerivedString : public Base {

    public:
    DerivedString(std::string data) :
        Base("String"),
        _data{ data } {
    }

    virtual std::string data() { return _data; };

    virtual bool is_null() const override {
        if (_data == "") {
            return true;
        }
        return false;
    }

    std::string to_string() const override {
        std::stringstream ss;
        ss << _data;
        return ss.str();
    }


    bool operator==(const DerivedString& other) const {
        if (_data == other._data) {
            return true;
        }
        return false;
    }

    private:
    std::string _data;
};