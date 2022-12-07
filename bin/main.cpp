#include <functional>
#include <lib/ArgParser.h>
#include <iostream>
#include <numeric>

int main(int argc, char** argv) {
    ArgumentParser::ArgParser parser("My Parser");
    parser.AddIntArgument("param1");
    parser.Parse(argc, argv);
    std::cout << parser.GetIntValue("param1") << std::endl;
    return 0;

}
