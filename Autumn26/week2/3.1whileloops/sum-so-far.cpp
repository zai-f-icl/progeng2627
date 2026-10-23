#include <iostream>

int main()
{
    int sum = 0, add;
    std::cout << "we start at 0" << std::endl;
        std::cin >> add;
    while(add!=0){
        sum = sum + add;
        std::cout << "the sum so far is " << sum << std::endl;
        std::cin >> add;
    }
}