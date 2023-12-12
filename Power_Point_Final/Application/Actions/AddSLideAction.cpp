#include "AddSlideAction.hpp"
#include "../Application.hpp"
#include "../Document.hpp"

AddSlideAction::AddSlideAction(std::shared_ptr<Slide> slide) : slide(slide) {}

void AddSlideAction::exec()
{
    Application::getDocument()->addSlide(slide);
}


void AddSlideAction::reset()
{
    Application::getDocument()->delSlide(slide);
}