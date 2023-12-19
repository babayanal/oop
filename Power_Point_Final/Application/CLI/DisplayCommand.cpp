#include "DisplayCommand.hpp"
#include "../Application.hpp"
#include "../Document.hpp"
#include "../Director.hpp"
#include "Controller.hpp"

DisplayCommand::DisplayCommand(MapOfArgs args) : Command(args) {}

void DisplayCommand::exec()
{
    std::ostream &output = Application::getInstance()->getController()->getOutput();

    const auto &slides = Application::getInstance()->getDocument()->getSlides();

    for (const auto &slide : slides)
    {
        if (slide)
        {
            output << "Slide ID: " << slide->getId() << std::endl;
        }
        else
        {
            std::cerr << "Error: Invalid slide encountered." << std::endl;
        }
    }
}
