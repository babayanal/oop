#ifndef COMMAND_HPP
#define COMMAND_HPP

#include <iostream>
#include <map>
#include <string>
#include <memory>

using String = std::string;
using MapOfArgs = std::map<String, String>;

class Command
{
protected:
    MapOfArgs args;

public:
    Command(MapOfArgs Args) : args(Args) {}
    virtual ~Command(){}
    virtual void exec()=0;
};

#endif // COMMAND_HPP