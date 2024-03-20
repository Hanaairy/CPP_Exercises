#pragma once

#include "../lib/InstanceCounter.hpp"
#include <string>
#include <memory>

class StringInstancePair
{
    public:
    StringInstancePair(std::string str) :
        _str(std::move(str)),
        _ins(std::make_unique<InstanceCounter>()) 
        {}

    const std::string& get_str() const { return _str; };

    const InstanceCounter& get_instance_counter() const { return *_ins; };

    private:
    std::string _str;
    std::unique_ptr<InstanceCounter> _ins;
};