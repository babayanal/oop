#ifndef COMMAND_FACTORY_HPP
#define COMMAND_FACTORY_HPP

#include "Command.hpp"

class CommandFactory 
{
public:
    static std::unique_ptr<Command> create(String name, MapOfArgs args);
};

#endif // COMMAND_FACTORY_HPP