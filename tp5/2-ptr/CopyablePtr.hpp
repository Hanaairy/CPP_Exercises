#pragma once

#include "Object.hpp"

class CopyablePtr
{
    public:
    CopyablePtr() {}

    CopyablePtr(int value)
        : _obj{ new Object(value) } {
    }

    CopyablePtr(const CopyablePtr& other)
        : _obj{ (other._obj != nullptr) ? new Object(*other._obj) : nullptr } {
    }

    CopyablePtr(CopyablePtr&& other)
        : _obj{ std::move(other._obj) } {
        other._obj = nullptr;
    }

    bool operator==(std::nullptr_t) {
        if (_obj == nullptr) {
            return true;
        }
        return false;
    }

    Object const& operator*() const {
        return *_obj;
    }

    CopyablePtr const& operator=(const CopyablePtr& other) {
        if (this != &other) {
            if (_obj != nullptr) {
                delete _obj;
            }
            _obj = new Object(*other._obj);
        }
        return *this;
    }

    CopyablePtr const& operator=(CopyablePtr&& other) {
        if (this != &other) {
            if (_obj != nullptr) {
                delete _obj;
            }
            _obj = std::move(other._obj);
            other._obj = nullptr;
        }
        return *this;
    }

    void operator=(std::nullptr_t) {
        delete _obj;
        _obj = nullptr;
    }

    ~CopyablePtr() {
        delete _obj;
    }

    private:
    Object* _obj = nullptr;
};