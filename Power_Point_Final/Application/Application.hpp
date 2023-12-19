#ifndef APPLICATION_HPP
#define APPLICATION_HPP

#include <memory>

class Controller;
class Document;
class Director;

class Application
{
private:
    ~Application();
    Application();
    std::shared_ptr<Director> director;
    std::shared_ptr<Controller> controller;
    std::shared_ptr<Document> document;

public:
    std::shared_ptr<Controller> getController();
    std::shared_ptr<Document> getDocument();
    std::shared_ptr<Director> getDirector();
    static Application *getInstance();

    void run(std::istream &, std::ostream &);
};

#endif // APPLICATION_HPP