#include "Item.hpp"

int Item::ID=1;


Item::Item(){
    id=ID++;
}

std::string Item::getShape() const
{
    return shape;
}

void Item::setShape(std::string Shape)
{
    shape=Shape;
}

int Item::getId()const{
    return id;
}
