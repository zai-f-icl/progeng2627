// Write a program that reads from the user a number n, then reads n integer numbers from the
// user and stores them in a vector. The program then reads a number s from the user and prints 
// how many occurrences of s are contained in the vector.

#include <iostream>
#include <vector>

int main(){
    int n, temp, s;
    std::cout << "Please enter n:" << std::endl;
    std::cin >> n;
    std::vector<int> v;
    for(int i=0; i < n; i++)
    {
        std::cout << "please enter a number: " << std::endl;
        std::cin >> temp;
        v.push_back(temp);

    }
    std::cout << "please enter s:" << std::endl;
    std::cin >> s;
    int occurences = 0;
    for(int i=0; i<n; i++)
    {
        if(v[i] == s)
        {
            occurences = occurences + 1;
        }
    }
    if(occurences==0)
    {
            std::cout << "there are " << "no" << " occurrences of " << s << std::endl;
    }
    else{
        std::cout << "there are " << occurences << " occurrences of " << s << std::endl;
    }
    
}