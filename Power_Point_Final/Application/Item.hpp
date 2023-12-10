#ifndef ITEM_HPP
#define ITEM_HPP

#include <string>

class Item
{
private:
    std::string shape;
    static int ID;
    int id;

public:
    Item();
    int getId()const;
    std::string getShape() const;
    void setShape(std::string);
};

#endif // ITEM_HPP