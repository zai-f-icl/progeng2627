// Consider two warehouses that contain several varieties of fruits. This information is stored in text files.

// For example warehouse1.txt may contain:

// strawberries
// apples
// watermelons
// blackberries
// lemons
// pears

// And warehouse2.txt may contain:

// watermelons
// blueberries
// apples
// grapes

// We would like the program to create two text files, union.txt and intersection.txt.

// If the input is as shown above, then union.txt should contain these elements (in any order):

// strawberries
// apples
// watermelons
// blackberries
// lemons
// pears
// blueberries
// grapes

// And intersection.txt should contain these elements (in any order):

// apples
// watermelons

// For the purpose of computing the union implement the following function:

// void union_vector(const std::vector<std::string>& vin1, const std::vector<std::string>& vin2, std::vector<std::string>& vout)

// For the intersection implement the following function:

// void intersection_vector(const std::vector<std::string>& vin1, const std::vector<std::string>& vin2, std::vector<std::string>& vout)

// Also implement the following function with similar behaviour to ones we have seen before and use it both in union_vector and intersection_vector:

// int search_vector(std::string s, const std::vector<std::string>& vin)

// Write a main that:

//     Reads the names of the two text files for the input.
//     Reads the content of the text files and stores the information into vectors.
//     Computes the union using union_vector and stores the result in a text file called union.txt.
//     Computes the intersection using intersection_vector and stores the result in a text file called intersection.txt.
#include <vector>
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
// returns 1 if there is an element s in vin, else 0
int search_vector(std::string s, const std::vector<std::string>& vin)
{
    // access all alements vin
    for (int i=0; i<vin.size(); i++)
    {
        // if string s matches an element in vin, return 1
        if(s==vin[i])
        return 1;
    }
    // else return 0
    return 0;
}
void union_vector(const std::vector<std::string>& vin1, const std::vector<std::string>& vin2, std::vector<std::string>& vout)
{
    // push back all elements of vin1
    for (int i=0; i<vin1.size(); i++)
    {
        vout.push_back(vin1[i]);
    }
    // access all elements vin2
    for (int i=0;i<vin2.size();i++)
    {
        // push back only if they dont overlap
        if(!search_vector(vin2[i],vin1))
        {
            vout.push_back(vin2[i]);
        }
    }
}
void intersection_vector(const std::vector<std::string>& vin1, const std::vector<std::string>& vin2, std::vector<std::string>& vout)
{
    // access all vin1
    for (int i = 0; i < vin1.size(); i++)
    {
        // check if this element vin 1 exists in vin 2
        if(search_vector(vin1[i],vin2))
        {
            vout.push_back(vin1[i]);
        }
    }
    
}
int main()
{
    std::cout << "enter the 2 input filenames" << std::endl;
    std::string inputfilename, inputfilename2;
    std::cin >> inputfilename >> inputfilename2;
    std::vector<std::string> v1, v2;
    std::ifstream infile;
    // open the input file and put it in v
    infile.open(inputfilename);
    if(!infile.is_open())
    {
        return EXIT_FAILURE;
    }
    std::string temp;
    while (infile >> temp)
    {
        v1.push_back(temp);
    }
    infile.close();
    // do it again but for v2
    infile.open(inputfilename2);
    if(!infile.is_open())
    {
        return EXIT_FAILURE;
    }
    while (infile >> temp)
    {
        v2.push_back(temp);
    }
    infile.close();
    // define vector out
    std::vector<std::string> vout{};
    // union!
    union_vector(v1, v2, vout);
    // print to the output
    std::ofstream outfile;
    outfile.open("union.txt");
    for(int i=0; i<vout.size(); i++)
    {
        outfile << vout[i] << std::endl;
    }
    outfile.close();

    vout.clear();
    outfile.open("intersection.txt");
    intersection_vector(v1, v2, vout);
    for(int i=0; i<vout.size(); i++)
    {
        outfile << vout[i] << std::endl;
    }



}