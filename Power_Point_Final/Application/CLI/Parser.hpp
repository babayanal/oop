#ifndef PARSER_HPP
#define PARSER_HPP

#include <vector>
#include <sstream>
#include <memory>
#include "Command.hpp"
#include "CommandFactory.hpp"

using VectorOfStrings = std::vector<String>;


class Parser
{
public:
    std::unique_ptr<Command> parse(std::istream &);
    MapOfArgs tokenize(std::istream&);
};

#endif // PARSER_HPP
