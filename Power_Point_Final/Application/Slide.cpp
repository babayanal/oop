#include "Slide.hpp"
#include <memory>
#include <algorithm>

int Slide::ID = 1;

Slide::Slide()
{
    id = ID++;
}

void Slide::addItem(std::shared_ptr<Item> item)
{
    items.push_back(item);
}

void Slide::delItem(std::shared_ptr<Item> item)
{
    auto removeCondition = [item](std::shared_ptr<Item> elem)
    { return item == elem; };
    items.erase(std::remove_if(items.begin(), items.end(), removeCondition), items.end());
}

vectorOfItems Slide::getItems()
{
    return items;
}

std::shared_ptr<Item> Slide::getItemById(int id)
{
    auto it = std::find_if(items.begin(), items.end(), [&id](auto item)
                           { return item->getId() == id; });

    if (it != items.end())
    {
        return *it;
    }
    /// TODO : exception
}

int Slide::getId() const
{
    return id;
}
