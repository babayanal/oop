#ifndef DEL_ITEM_ACTION_HPP
#define DEL_ITEM_ACTION_HPP

#include <memory>
#include "Action.hpp"
#include "../Item.hpp"

class DelItemAction : public Action
{
public:
    DelItemAction(std::shared_ptr<Item> item, int slideId);

public:
    void exec() override;
    void reset() override;

private:
    std::shared_ptr<Item> item;
    int slideId;
};
#endif // DEL_ITEM_ACTION_HPP