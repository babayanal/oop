#ifndef ADD_ACTION_HPP
#define ADD_ACTION_HPP

#include <memory>
#include "Action.hpp"
#include "../Item.hpp"

class AddItemAction : public Action
{
public:
    AddItemAction( std::shared_ptr< Item > item, int slideId );
    
public:
    void exec() override;
    void reset() override;

private:
    std::shared_ptr< Item > item;
    int slideId;
};
#endif // ADD_ACTION_HPP