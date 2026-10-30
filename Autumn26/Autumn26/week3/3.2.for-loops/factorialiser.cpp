#include <iostream>
int main(){
    int n;
    std::cout << "enter a number to be factorialised" << std::endl;
    std::cin >> n;
    int output = 1;
    for (int i=0; i < n; i++)
    {
        output = output * (n-i);
    }
    std::cout << n <<"! = " << output << std::endl;
}