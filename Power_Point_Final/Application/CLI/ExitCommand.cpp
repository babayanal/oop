#include "ExitCommand.hpp"
#include "../Application.hpp"
#include "Controller.hpp"

ExitCommand::ExitCommand(MapOfArgs args) : Command(args) {}

void ExitCommand::exec()
{
    Application::getController()->exit();
}
