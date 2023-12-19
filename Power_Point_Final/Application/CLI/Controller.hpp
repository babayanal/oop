#ifndef CONTROLLER_HPP
#define CONTROLLER_HPP

#include "Parser.hpp"
#include "Command.hpp"

class Controller
{

public:
    Controller(std::istream &is, std::ostream &os):input(is),output(os){}
    void run();
    void exit();

    std::istream &getInput();
    std::ostream &getOutput();

private:
    bool isExit = false;
    std::istream &input;
    std::ostream &output;
};

#endif // CONTROLLER_HPP