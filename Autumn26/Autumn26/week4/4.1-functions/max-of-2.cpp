#include <iostream>

double max_of_2(double n1, double n2)
{
    double max=0;
    if(n1>n2)
    {
        max = n1;
    }
    else{
        max = n2;
    }
    return max;
}
int main()
{
    double no1, no2;
    std::cout <<"please enter 2 numbers"<< std::endl;
    std::cin >> no1 >> no2;
    std::cout << "the larger of the 2 numbers is " << max_of_2(no1, no2);
}