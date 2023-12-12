#include "DelItemAction.hpp"
#include "../Application.hpp"
#include "../Document.hpp"

DelItemAction::DelItemAction(int itemId, int slideId)
    : itemId(itemId), slideId(slideId) {}

void DelItemAction::exec()
{
    deleted = Application::getDocument()->getSlideById(slideId)->getItemById(itemId);
    Application::getDocument()->getSlideById(slideId)->delItem(deleted);
}

void DelItemAction::reset()
{
    Application::getDocument()->getSlideById(slideId)->addItem(deleted);
    itemId = Application::getDocument()->getSlideById(slideId)->getItemById(itemId); /// TODO : ???
}