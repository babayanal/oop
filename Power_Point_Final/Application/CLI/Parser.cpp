#include "Parser.hpp"

#include <sstream>

std::unique_ptr<Command> Parser::parse(std::istream &input)
{
    std::string commandName;
    input >> commandName;
    return CommandFactory::create(commandName, tokenize(input));
}

MapOfArgs Parser::tokenize(std::istream &input)
{
    
    MapOfArgs args;
    if(input.peek()==EOF){
        return args;
    }
    std::string line;
    std::getline(input, line);
    std::stringstream ss(line);
    std::string name, value;

    while (ss >> name >> value)
    {
        args[name] = value;
    }
    return args;
}
