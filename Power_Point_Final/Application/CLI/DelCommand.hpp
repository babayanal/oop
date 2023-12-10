#ifndef DEL_COMMAND_HPP
#define DEL_COMMAND_HPP

#include "Command.hpp"

class DelCommand : public Command
{
public:
    DelCommand(MapOfArgs args);
    void exec() override;
};

#endif // DEL_COMMAND_HPP