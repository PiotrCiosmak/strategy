#include "include/Context.hpp"
#include "include/ConcreteStrategyA.hpp"
#include "include/ConcreteStrategyB.hpp"

void clientCode();

int main()
{
    clientCode();
}

void clientCode()
{
    Context context(std::make_unique<ConcreteStrategyA>());
    std::cout << "Client: Strategy is set to normal sorting.\n";
    context.doSomeBusinessLogic();

    std::cout << "\nClient: Strategy is set to reverse sorting.\n";
    context.setStrategy(std::make_unique<ConcreteStrategyB>());
    context.doSomeBusinessLogic();
}