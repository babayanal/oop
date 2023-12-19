#include "Application.hpp"
#include "CLI/Controller.hpp"
#include "Document.hpp"
#include "Director.hpp"
#include <cassert>

Application::Application()
    : director(std::make_shared<Director>()), document(std::make_shared<Document>()) {}

Application::~Application() {}

std::shared_ptr<Controller> Application::getController()
{
    assert(controller);
    return controller;
}

std::shared_ptr<Document> Application::getDocument()
{
    return document;
}

std::shared_ptr<Director> Application::getDirector()
{
    return director;
}

void Application::run(std::istream &is, std::ostream &os)
{
    if(!controller){
        controller=std::make_shared<Controller>(is,os);
    }
    controller->run();
}

Application *Application::getInstance()
{
    static Application app;
    return &app;
}