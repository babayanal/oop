#include "CommandFactory.hpp"
#include "ExitCommand.hpp"
#include "AddCommand.hpp"

std::unique_ptr<Command> CommandFactory::create(String name,MapOfArgs args){
    if(name=="exit"){
        return std::make_unique<ExitCommand> (args);
    }
    if(name=="add"){
        return std::make_unique<AddCommand> (args);
    }
}