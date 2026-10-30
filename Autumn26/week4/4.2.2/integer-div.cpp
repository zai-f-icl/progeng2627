 // Write a function that takes in input two integer numbers, let's call them a and b and provides in output using output parameters' both the result of the integer division of a divided by b and the remainder.

// In this as in other cases, we will not include any checks within the function for issues with input (such as division by zero). Our responsibility is only to make sure that the function works when the input makes sense.

// As usual the function itself doesn't read from the user and doesn't print.

// Write a main to test the function. 

#include <iostream>

void divider(int num, int denom, int& output, int& remainder){
    output = num / denom;
    remainder = num % denom;
}
int main()
{
    int n1, n2, o, r;
    std::cin >> n1 >> n2;
    divider (n1, n2, o, r);
    std::cout << n1 << "/" << n2 << " = " << o << " with remainder " << r << std::endl;
}