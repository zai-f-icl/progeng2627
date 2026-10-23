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
    

    return result;
}
double sumpow(int terms, double base)
{
    double sum = 0;
    for (int i=0; i < terms; i++)
    {
        sum = sum + mypow(base, i+1);
    }
    return sum;
}
int main()
    {
    double x;
    int n;

    std::cin >> x >> n;
    std::cout << sumpow(n, x) << std::endl;
    }