#ifndef PARSER_HPP
#define PARSER_HPP

#include <vector>
#include <sstream>
#include "Command.hpp"

using VectorOfStrings = std::vector<String>;

class Parser
{
public:
    Command parse(String); // TK: Parsers input should be istream&

private:
    VectorOfStrings tokenize(String); // Actually there is no need to tokenize whole string at once, instead parser should consume tokens one by one 
};

#endif // PARSER_HPP
