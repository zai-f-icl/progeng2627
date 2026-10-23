#include <iostream>

int main(){

    double x, output = 0;
    int i = 0, n = 0;
    std::cout << "x*n, enter x and n" << std::endl;
    std::cin >> x;
    std::cin >> n;
    while (i < n)
    {
        output = output + x;
        i = i+1;
    }
    std::cout << x << " * " << n << " = " << output << std::endl;
    // debugging line because i made a mistake

}