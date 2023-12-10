#ifndef EXIT_COMMAND_HPP
#define EXIT_COMMAND_HPP

#include "Command.hpp"

class ExitCommand : public Command
{
public:
    ExitCommand(MapOfArgs args);
    void exec() override;
};

#endif // EXIT_COMMAND_HPP