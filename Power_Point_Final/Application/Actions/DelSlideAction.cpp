#include "DelSlideAction.hpp"
#include "../Application.hpp"
#include "../Document.hpp"

DelSlideAction::DelSlideAction(std::shared_ptr<Slide> slide) : slide(slide) {}

void DelSlideAction::exec()
{
    Application::getInstance()->getDocument()->delSlide(slide);
}

void DelSlideAction::reset()
{
    Application::getInstance()->getDocument()->addSlide(slide);
}