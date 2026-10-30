#include <iostream>

int smallest_factor(int n)
{
    for(int cf = 2; cf < n; cf++){

        if( (n % cf) == 0){ // n can be divided by cf...

            return cf;
            //...it means we have found a factor!
        }
    }
    return 0;
}
void list_primes (int lb, int ub)
{
    for(int i=lb; i <= ub; i++)
    {
        if(smallest_factor(i)==0)
        {
            std::cout << i << std::endl;
        }
    }
}
int main()
{
    int n, ub, lb;
    std::cin >> lb >> ub;
    list_primes(lb, ub);
}