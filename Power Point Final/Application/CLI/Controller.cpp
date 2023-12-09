#include "Controller.hpp"

void Controller::run()
{
    bool isExit = true; // TK: May be wice versa? isExit = false, otherwise your loop never will be executed 
    Command cmd;
    while (!isExit)
    {
        cmd = Parser.parse(getInput());
        cmd->exec();
    }
}

String Controller ::getInput()
{
    std::string input;
    std::getline(std::cin, input);
    return input;
}
