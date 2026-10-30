#include <iostream>
#include <cmath>

int main()
    {
    int x, n;

    std::cin >> x >> n;

    int sum = 0;
    for (int i=0; i < n; i++)
    {
        sum = sum + std::pow(x, i+1);
    }
    std::cout << sum << std::endl;
    }