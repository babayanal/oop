#include "Application.hpp"
#include "CLI/Controller.hpp"
#include "Document.hpp"
#include "Director.hpp"

Application::Application(std::istream &IS, std::ostream &OS) : is(IS), os(OS) {}

Application::~Application(){}

std::shared_ptr<Controller> Application::getController()
{
    static std::shared_ptr<Controller> controller;
    if (!controller)
    {
        controller = std::make_shared<Controller>();
    }
    return controller;
}

std::shared_ptr<Document> Application::getDocument()
{
    static std::shared_ptr<Document> document;
    if (!document)
    {
        document = std::make_shared<Document>();
    }
    return document;
}

std::shared_ptr<Director> Application::getDirector()
{
    static std::shared_ptr<Director> director;
    if (!director)
    {
        director = std::make_shared<Director>();
    }
    return director;
}

void Application::run()
{
    getController()->run(is, os);
}