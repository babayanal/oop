#include "SaveCommand.hpp"
#include "../Application.hpp"
#include "../Document.hpp"
#include "../Director.hpp"
#include "Controller.hpp"
#include <fstream>

SaveCommand::SaveCommand(MapOfArgs args) : Command(args) {}

void SaveCommand::exec()
{
    std::ostream &output = Application::getInstance()->getController()->getOutput();
    const auto slides = Application::getInstance()->getDocument()->getSlides();
    std::ofstream file("saved_slides.txt");

    if (!file.is_open())
    {
        std::cerr << "Error: Unable to open the file for writing." << std::endl;
        return;
    }

    for (const auto &slide : slides)
    {
        if (slide)
        {
            file << slide->getId() << std::endl;
        }
        else
        {
            std::cerr << "Error: Invalid slide encountered." << std::endl;
        }
    }

    file.close();
}
