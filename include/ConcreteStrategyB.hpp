#pragma once

#include "Strategy.hpp"

class ConcreteStrategyB : public Strategy
{
public:
    [[nodiscard]] std::string doAlgorithm(std::string_view data) const override;
};
