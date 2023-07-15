#pragma once

#include <memory>
#include "Strategy.hpp"

class Context
{
public:
    explicit Context(std::unique_ptr<Strategy> &&new_strategy={});
    void setStrategy(std::unique_ptr<Strategy>&& strategy);
    void doSomeBusinessLogic() const;

private:
    std::unique_ptr<Strategy> strategy;
};
