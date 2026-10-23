#include <iostream>

int main()
{
    int count = 0, term;

    double mean = 0, sum = 0;
    std::cout << "we start at zero" << std::endl;
    std::cin >> term;
    while(term!=0)
        {
            count++;
            sum = sum + term;
            mean = sum / count;
            std::cout << "the average so far is:" << mean << std::endl;
            std::cout << "enter a number:" << std::endl;
            std::cin >> term;
        }
}