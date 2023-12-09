#ifndef APPLICATION_HPP
#define APPLICATION_HPP

#include "CLI/Controller.hpp"

class Application
{

private:
    Controller *controller;

    // TK Application should have exec() method where it will call Controllers run method
public:
    Controller* getController();

    // Application also should keep the Document & Director
};

#endif // APPLICATION_HPP
