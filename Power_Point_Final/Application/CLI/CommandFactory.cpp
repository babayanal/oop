#include "CommandFactory.hpp"
#include "ExitCommand.hpp"
#include "AddCommand.hpp"
#include "ListCommand.hpp"
#include "DelCommand.hpp"
#include "SaveCommand.hpp"
#include "LoadCommand.hpp"
#include "DrawCommand.hpp"

std::unique_ptr<Command> CommandFactory::create(String name, MapOfArgs args)
{
    if (name == "exit")
    {
        return std::make_unique<ExitCommand>(args);
    }
    if (name == "add")
    {
        return std::make_unique<AddCommand>(args);
    }
    if (name == "list")
    {
        return std::make_unique<ListCommand>(args);
    }
    if (name == "del")
    {
        return std::make_unique<DelCommand>(args);
    }
    if (name == "save")
    {
        return std::make_unique<SaveCommand>(args);
    }
    if (name == "load")
    {
        return std::make_unique<LoadCommand>(args);
    }
    if (name == "draw")
    {
        return std::make_unique<DrawCommand>(args);
    }
}