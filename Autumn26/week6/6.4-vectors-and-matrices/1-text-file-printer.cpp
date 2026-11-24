#include <iostream>
#include <fstream>
#include <cstdlib>

int main(int argc, char*argv[])
{
    std::string textname = argv[1];
    std::ifstream infile;
    infile.open(textname);
    if (!infile.is_open())
    {
        return EXIT_FAILURE;
    }
    std::string temp;
    while (infile >> temp)
    {
        std::cout << temp;
    }
}