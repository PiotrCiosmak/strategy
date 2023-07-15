#include "../include/Context.hpp"

Context::Context(std::unique_ptr<Strategy>&& new_strategy) : strategy{std::move(new_strategy)}
{}

void Context::setStrategy(std::unique_ptr<Strategy>&& strategy)
{
    this->strategy = std::move(strategy);
}

void Context::doSomeBusinessLogic() const
{
    if (strategy)
    {
        std::cout << "Context: Sorting data using the strategy (not sure how it'll do it)\n";
        std::string result = strategy->doAlgorithm("aecbd");
        std::cout << result << "\n";
    }
    else
    {
        std::cout << "Context: Strategy isn't set\n";
    }
}
