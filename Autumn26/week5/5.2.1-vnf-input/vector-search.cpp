// Write a function with the following interface:

// int search_vector(int n, const std::vector<int>& vin)

// This function should check if the vector contains an element with
//  value n and return the index of (the first occurrence of) the element 
//  if it is found (remember that you can use an early return in this case) 
//  and -1 if not.

// (There is already a function in the standard library performing this 
// task but don't use it for this exercise because it would defeat the purpose.)

// Before you even start implementing the function, write the test cases in the main.
#include <iostream>
#include <vector>
int search_vector(int n, const std::vector<int>& vin)
{
    for(int i = 0; i < vin.size(); i++)
    {
        if(vin[i] == n)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    std::vector<int> v;
    // check that it works
    v = {0,1,2,3,4,5};
    std::cout << search_vector(3,v) - 3 << std::endl;
    // what if it appears twice?
    v = {123,-11,55,17,55};
    std::cout << search_vector(55,v) - 2 << std::endl;
    // what if it does not appear at all
    v = {44,196,3,2025};
    std::cout << search_vector(420,v) + 1 << std::endl;
    // all of these prints should print 0
}