#ifndef ACTION_HPP
#define ACTION_HPP

class Action
{
public:
    virtual ~Action(){}
    virtual void reset() = 0;
    virtual void exec() = 0;
};

#endif // ACTION_HPP