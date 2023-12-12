#ifndef DEL_SLIDE_ACTION_HPP
#define DEL_SLIDE_ACTION_HPP

#include <memory>
#include "Action.hpp"
#include "../Slide.hpp"

class DelSlideAction : public Action
{
public:
    DelSlideAction(int slideId);

public:
    void exec() override;
    void reset() override;

private:
    int slideId;
    std::shared_ptr<Slide> deleted;
};
#endif // DEL_SLIDE_ACTION_HPP