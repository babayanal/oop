#ifndef CONTROLLER_HPP
#define CONTROLLER_HPP

#include "Parser.hpp"
#include "Command.hpp"

class Controller
{

public:
    void run(std::istream &, std::ostream &);
    void exit();

public:
    std::istream &getInput();
    std::ostream &getOutput();

private:
    bool isExit = false;
    std::iostream &input;
    std::ostream &output;
};

#endif // CONTROLLER_HPP