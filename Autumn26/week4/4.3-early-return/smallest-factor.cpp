#include <iostream>

// Write a function with the following interface:

int smallest_factor(int n)

// Which takes in input a number n greater than 1 and returns the smallest prime factor (i.e. other than 1) of n, if n is not prime, or 0 if n is prime. 
{
    for(int cf = 2; cf < n; cf++){

        if( (n % cf) == 0){ // n can be divided by cf...

            return cf;
            //...it means we have found a factor!
        }
    }
    return 0;
}
int main()
{
    int n;
    std::cin >> n;
    std::cout << "the smallest prime factor of n is: " << smallest_factor(n) << std::endl;
}