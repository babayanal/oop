#include "Controller.hpp"

void Controller::run(std::istream &is, std::ostream &os)
{
    Parser parser;
    while (!isExit)
    {
        auto cmd = parser.parse(is);
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