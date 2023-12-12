#ifndef DRAW_COMMAND_HPP
#define DRAW_COMMAND_HPP

#include "Command.hpp"

class DrawCommand : public Command
{
public:
    DrawCommand(MapOfArgs args);
    void exec() override;
};

#endif // DRAW_COMMAND_HPP
