#include "Controller.hpp"

void Controller::run()
{
    Parser parser;
    while (!isExit)
    {
        auto cmd = parser.parse(input);
        cmd->exec();
    }
}

std::istream &Controller ::getInput()
{
    return input;
}

std::ostream &Controller::getOutput()
{
    return output;
}

void Controller::exit()
{
    isExit = true;
}