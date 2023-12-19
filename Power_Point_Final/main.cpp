#include <iostream>
#include "Application/Application.hpp"

int main()
{

    auto app = Application::getInstance();
    app->run(std::cin, std::cout);
    return 0;
}