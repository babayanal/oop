#ifndef DEL_SLIDE_ACTION_HPP
#define DEL_SLIDE_ACTION_HPP

#include <memory>
#include "Action.hpp"
#include "../Slide.hpp"

class DelSlideAction : public Action
{
public:
    DelSlideAction(std::shared_ptr<Slide> slide);

public:
    void exec() override;
    void reset() override;

private:
    std::shared_ptr<Slide> slide;
    std::shared_ptr<Slide> deleted;
};
#endif // DEL_SLIDE_ACTION_HPP