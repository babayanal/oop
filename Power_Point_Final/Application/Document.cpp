#include "Document.hpp"
#include <algorithm>

void Document::addSlide(std::shared_ptr<Slide> slide)
{
    slides.push_back(slide);
}

void Document::delSlide(std::shared_ptr<Slide> slide)
{
    auto removeCondition = [slide](std::shared_ptr<Slide> elem)
    { return slide == elem; };
    slides.erase(std::remove_if(slides.begin(), slides.end(), removeCondition), slides.end());
}

const std::vector<std::shared_ptr<Slide>> &Document::getSlides() const
{
    return slides;
}

std::shared_ptr<Slide> Document::getSlideById(int id)
{
    auto it = std::find_if(slides.begin(), slides.end(), [&id](auto slide)
                           { return slide->getId() == id; });

    if (it != slides.end())
    {
        return *it;
    }
    /// TODO: exception
}