#include <iostream>
#include <cmath>

double mypow(double base, int exp){
    double result = 1; 
    // we declare a variable for the result
    // (should it be initialised? to what value?)
    if (exp >=0)
    {
         for (int i=0; i < exp; i++)
            {
            result = result * base;
            }
    }
    else
    {
        for (int i=0; i < -exp; i++)
        {
            result = result / base;
        }
    }
    
   
    // TODO: use a for loop to implement the repeated multiplication algorithm 
    // so that at the end of the loop variable result contains base^exp

    return result;
    // at the end we return the value we computed
    // we *do not print* anything in the function
}
int main()
    {
    int x, n;

    std::cin >> x >> n;

    int sum = 0;
    for (int i=0; i < n; i++)
    {
        sum = sum + mypow(x, i+1);
    }
    std::cout << sum << std::endl;
    }