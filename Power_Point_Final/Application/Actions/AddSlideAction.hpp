#ifndef ADD_SLIDE_ACTION_HPP
#define ADD_SLIDE_ACTION_HPP

#include <memory>
#include "Action.hpp"
#include "../Slide.hpp"

class AddSlideAction : public Action
{
public:
    AddSlideAction(std::shared_ptr<Slide> slide);

public:
    void exec() override;
    void reset() override;

private:
    std::shared_ptr<Slide> slide;
};
#endif // ADD_SLIDE_ACTION_HPP