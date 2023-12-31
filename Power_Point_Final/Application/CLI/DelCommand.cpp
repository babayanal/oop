#include "DelCommand.hpp"
#include "../Application.hpp"
#include "../Document.hpp"
#include "../Director.hpp"
#include "../Actions/DelItemAction.hpp"

DelCommand::DelCommand(MapOfArgs args) : Command(args) {}

void DelCommand::exec()
{
    if (args.at("-type") == "slide")
    {
        int id = std::stoi(args.at("-id"));
        auto slide = Application::getInstance()->getDocument()->getSlideById(id);
        Application::getInstance()->getDocument()->delSlide(slide);
    }
    else if (args.at("-type") == "item")
    {
        int id = std::stoi(args.at("-id"));
        // TODO: need to add exception
        auto item = std::make_shared<Item>();
        item->setShape(args.at("-shape"));
        auto action = std::make_shared<DelItemAction>(item, id);
        Application::getInstance()->getDirector()->exec(action);
    }
}
