#pragma once

#include <iostream>

class Strategy
{
public:
    [[nodiscard]] virtual std::string doAlgorithm(std::string_view data) const = 0;
};
