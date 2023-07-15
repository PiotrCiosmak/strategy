cmake_minimum_required(VERSION 3.25)
project(strategy)

set(CMAKE_CXX_STANDARD 23)

add_executable(strategy main.cpp include/Strategy.hpp src/Context.cpp include/Context.hpp src/ConcreteStrategyA.cpp include/ConcreteStrategyA.hpp src/ConcreteStrategyB.cpp include/ConcreteStrategyB.hpp)
