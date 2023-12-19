#include "DelItemAction.hpp"
#include "../Application.hpp"
#include "../Document.hpp"

DelItemAction::DelItemAction(std::shared_ptr<Item>  item, int slideId)
    : item(item), slideId(slideId) {}

void DelItemAction::exec()
{
    Application::getInstance()->getDocument()->getSlideById(slideId)->delItem(item);
}

void DelItemAction::reset()
{
    Application::getInstance()->getDocument()->getSlideById(slideId)->addItem(item);
}