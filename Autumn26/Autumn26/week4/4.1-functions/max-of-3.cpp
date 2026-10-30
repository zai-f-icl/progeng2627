#include <iostream>

double max_of_2(double n1, double n2, double n3)
{
    double max=0;
    if((n1>n2)&&(n1>n3))
    {
        max = n1;
    }
    else if(n2 > n3){
        max = n2;
    }
    else{
        max = n3;
    }
    return max;
}
int main()
{
    double no1, no2, no3;
    std::cout <<"please enter 3 numbers"<< std::endl;
    std::cin >> no1 >> no2 >> no3;
    std::cout << "the largest of the 3 numbers is " << max_of_2(no1, no2, no3);
}