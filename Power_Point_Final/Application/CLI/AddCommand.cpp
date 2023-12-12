#include "AddCommand.hpp"
#include "../Application.hpp"
#include "../Document.hpp"
#include "../Director.hpp"
#include "../Actions/AddItemAction.hpp"


AddCommand::AddCommand(MapOfArgs args) : Command(args) {}

void AddCommand::exec()
{
    if(args.at("-type")=="slide"){
        Application::getDocument()->addSlide(std::make_shared<Slide>());
    }
    else if(args.at("-type")=="item") {
        int id=std::stoi(args.at("-id"));
        ///TODO: need to add exception 
        auto item = std::make_shared<Item>();
        item->setShape(args.at("-shape"));
        auto action=std::make_shared<AddItemAction>(item,id);
        Application::getDirector()->exec(action);
    }
}