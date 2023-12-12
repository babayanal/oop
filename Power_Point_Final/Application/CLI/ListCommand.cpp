#include "ListCommand.hpp"
#include "../Application.hpp"
#include "../Document.hpp"
#include "Controller.hpp"

ListCommand::ListCommand(MapOfArgs args) : Command(args) {}

void ListCommand::exec()
{
    std::ostream &output = Application::getController()->getOutput();
    output << "Slides:" << std::endl;

    for (const auto &slide : Application::getDocument()->getSlides())
    {
        output << slide->getId() << std::endl;
    }
}
