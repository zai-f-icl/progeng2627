// Write a program that reads from the user a number n, 
// then reads n numbers from the user and stores them in a vector. 
// The program then reads a number t from the user and prints all the numbers in the vector that are less than t.
#include <iostream>
#include <vector>

int main()
{
    int n;
    std::cin >> n;
    int temp;
    std::vector<int> v;
    for(int i = 0; i<n; i++)
    {
        std::cin >> temp;
        v.push_back(temp);
    }
    std::cout << "input done. enter the amount you want the output to be lesser than, t" << std::endl;
    int t;
    std::cin >> t;
    for(int i=0; i<n; i++)
    {
        if (v[i] < t)
        {
           std::cout << v[i] << std::endl;
        }
        
    }
}