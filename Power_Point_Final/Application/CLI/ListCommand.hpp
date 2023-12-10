#ifndef LIST_COMMAND_HPP
#define LIST_COMMAND_HPP

#include "Command.hpp"

class ListCommand : public Command
{
public:
    ListCommand(MapOfArgs args);
    void exec() override;
};

#endif // LIST_COMMAND_HPP