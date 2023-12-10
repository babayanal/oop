#ifndef CONTROLLER_HPP
#define CONTROLLER_HPP

#include "Parser.hpp"
#include "Command.hpp"

class Controller
{

public:
    void run(std::istream &, std::ostream &);
    void exit();

private:
    bool isExit = false;
    String getInput();
};

#endif // CONTROLLER_HPP