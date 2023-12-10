#include "Controller.hpp"

void Controller::run(std::istream & is, std::ostream & os)
{
    Parser parser;
    while (!isExit)
    {
        auto cmd = parser.parse(is);
        cmd->exec();
    }
}

String Controller ::getInput()
{
    std::string input;
    std::getline(std::cin, input);
    return input;
}

void Controller::exit(){
    isExit=true;
}