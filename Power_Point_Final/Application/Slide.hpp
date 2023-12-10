#ifndef SLIDE_HPP
#define SLIDE_HPP

#include <iostream>
#include <vector>

#include "Item.hpp"
#include <memory>

using vectorOfItems = std::vector<std::shared_ptr<Item>>;

class Slide
{
public:
    void addItem(std::shared_ptr<Item>);
    void delItem(int);
    vectorOfItems getItems();
    std::shared_ptr<Item> getItemById(int);
    int getId()const;
    Slide();

private:
    static int ID;
    int id;
    vectorOfItems items;
};

#endif // SLIDE_HPP