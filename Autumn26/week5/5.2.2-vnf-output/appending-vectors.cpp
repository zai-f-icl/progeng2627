// Write a function with the following interface:

// void append_vectors(const std::vector<int>& vin1, const std::vector<int>& vin2, std::vector<int>& vout)

// This function takes in input vectors vin1 and vin2 and provides 
// in output (using passing by reference) vector vout containing the
//  values of all the elements contained in vin1 followed by the 
//  values of all the elements contained in vin2.

// For example if vin1 contains 1 7 3 4 and vin2 contains 2 -2 19 
// then vout should contain 1 7 3 4 2 -2 19.

// Write a main to test the function.
#include <vector>
#include <iostream>

void append_vectors(const std::vector<int>& vin1, const std::vector<int>& vin2, std::vector<int>& vout)
{
    for(int i=0; i<vin1.size();i++)
    {
        vout.push_back(vin1[i]);
    }
    for(int i=0; i<vin2.size();i++)
    {
        vout.push_back(vin2[i]);
    }
}
int main()
{
    std::vector<int>v1, v2, vout;
    v1 = {1,7,3,4};
    v2 = {2,-2,19};
    append_vectors(v1, v2, vout);
    // print vout
    for(int i = 0; i<vout.size();i++)
    {
        std::cout << vout[i] << std::endl;
    }
}
