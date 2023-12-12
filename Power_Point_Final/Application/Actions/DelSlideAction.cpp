#include "DelSlideAction.hpp"
#include "../Application.hpp"
#include "../Document.hpp"

DelSlideAction::DelSlideAction(int slideId) : slideId(slideId) {}

void DelSlideAction::exec()
{
    Application::getDocument()->getSlideById(slideId)->delSlide(deleted); /// TODO : ???
}

void DelSlideAction::reset()
{
    slideId = Application::getDocument()->getSlideById(slideId); /// TODO : ???
}