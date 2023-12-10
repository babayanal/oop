#include "AddItemAction.hpp"
#include "../Application.hpp"
#include "../Document.hpp"

AddItemAction::AddItemAction(std::shared_ptr<Item> item, int slideId)
    : item(item), slideId(slideId) {}

void AddItemAction::exec()
{
    Application::getDocument()->getSlideById(slideId)->addItem(item);
}

void AddItemAction::reset()
{
    Application::getDocument()->getSlideById(slideId)->delItem(item->getId());
}