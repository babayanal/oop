#include <iostream>
#include "Application/Application.hpp"

int main()
{

    Application app(std::cin,std::cout);
    app.run();
    return 0;
}