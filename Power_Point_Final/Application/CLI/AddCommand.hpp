#ifndef ADD_COMMAND_HPP
#define ADD_COMMAND_HPP

#include "Command.hpp"

class AddCommand : public Command
{
public:
    AddCommand(MapOfArgs args);
    void exec() override;
};

#endif // ADD_COMMAND_HPP