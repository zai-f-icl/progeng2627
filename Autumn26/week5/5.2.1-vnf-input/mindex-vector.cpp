// Write a function with the following interface:

// int min_vector_element(const std::vector<double>& vin)

// This function should return the index of the smallest 
// element in the vector and -1 if the vector is empty.

// Before you even start implementing the function, write the test cases in the main.



#include <iostream>
#include <vector>

int min_vector_element(const std::vector<double>& vin)
{
    if(vin.size()!=0)
    {
        int min = vin[0];
        for(int i=0; i<vin.size(); i++)
        {
            if (vin[i] < min)
            {
                min = i;
            }
        }   
        return min;
    }
    else{
        return -1;
    }

}
int main()
{
    std::vector<double> v{3, 11, 9, -5};
    std::cout << min_vector_element(v) - 3 << std::endl;
    v = {0, 1, 15, 3, 22};
    std::cout << min_vector_element(v) << std::endl;
    v = {230, 101, 20002};
    std::cout << min_vector_element(v) - 1 << std::endl;
    v = {13, 1, -55};
    std::cout << min_vector_element(v) - 2 << std::endl;
    v = {};
    std::cout << min_vector_element(v) + 1 << std::endl;
    // should print 5 zeros
}