#ifndef DOCUMENT_HPP
#define DOCUMENT_HPP

#include "string"
#include <memory>

#include "Slide.hpp"

using VectorOfStrings = std::vector<std::string>;

class Document
{
private:
    std::vector<std::shared_ptr<Slide>> slides;

public:
    void addSlide(std::shared_ptr<Slide>);
    void delSlide(int id);
    const std::vector<std::shared_ptr<Slide>> & getSlides() const;
    std::shared_ptr<Slide> getSlideById(int id);
};

#endif //DOCUMENT_HPP