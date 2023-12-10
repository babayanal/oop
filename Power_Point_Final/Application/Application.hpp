#ifndef APPLICATION_HPP
#define APPLICATION_HPP

#include <memory>

class Controller;
class Document;
class Director;

class Application
{

public:
    ~Application();
    Application(std::istream &, std::ostream &);
    static std::shared_ptr<Controller> getController();
    static std::shared_ptr<Document> getDocument();
    static std::shared_ptr<Director> getDirector();

    void run();

private:
    std::istream &is;
    std::ostream &os;
};

#endif // APPLICATION_HPP