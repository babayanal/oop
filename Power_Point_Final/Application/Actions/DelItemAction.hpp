#ifndef DEL_ITEM_ACTION_HPP
#define DEL_ITEM_ACTION_HPP

#include <memory>
#include "Action.hpp"
#include "../Item.hpp"

class DelItemAction : public Action
{
public:
    DelItemAction(int itemId, int slideId);

public:
    void exec() override;
    void reset() override;

private:
    int itemId;
    int slideId;
    std::shared_ptr<Item> deleted;
};
#endif // DEL_ITEM_ACTION_HPP