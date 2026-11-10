#include <iostream>
#include <fstream>
#include <cstdlib>
#include <vector>
#include <string> 

int main(){

    std::string inputfilename;
    // as usual not a special name
    std::cout << "enter name of input file" << std::endl;

    std::cin >> inputfilename;

    std::ifstream infile; 
    infile.open(inputfilename);
    if(!infile.is_open()){
        return EXIT_FAILURE;
    }
    std::vector<int> v;
    int temp;
    while (infile >> temp)
    {
        v.push_back(temp);
    }
    infile.close();
    std::ofstream outfile;
    std::cout << "input the output file name" << std::endl;
    std::string outputfilename;
    std::cin >> outputfilename;
    outfile.open(outputfilename);
    if(!outfile.is_open())
    {
        return EXIT_FAILURE;
    }
    for(int i=0;i<v.size();i++)
    {
        outfile << v[v.size()-i-1] << std::endl;
    }
}

    