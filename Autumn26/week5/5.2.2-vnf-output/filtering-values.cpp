// Write a function with the following interface:

// void filter_v(const std::vector<double>& vin, double t, std::vector<double>& vout)

// This function takes in input a vector vin and a numerical value t
// and provides in output (using passing by reference) a vector vout 
// containing all the values in vin that are less than t.

// Write a main to test the function.

#include <vector>
#include <iostream>
void filter_v(const std::vector<double>& vin, double t, std::vector<double>& vout)
{
    for(int i=0; i<vin.size(); i++)
    {
        if(vin[i] < t)
        {
            vout.push_back(vin[i]);
        }
    }
}
int main()
{
    std::vector<double> v1, vout;
    v1 = {-5, 12, 0, 133, -150, 44, 55, 33, 4, 1};
    double t = 15;
    filter_v(v1, t, vout);
    for(int i=0; i < vout.size(); i++)
    {
        std::cout << vout[i] << std::endl;
        
    }
    // print the vout
}
