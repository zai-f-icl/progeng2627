#include <iostream>

int main(){

    int a = 0, b = 0;
    int q = 0, r = 0;
    std::cout << "Enter a and b for a/b" << std::endl;
    std::cin >> a >> b;
    r=a;
    while(r>b)
    {
        r=r-b;
        q++;
    }
    std::cout << a << "/" << b <<" is equal to "<< q << " remainder " << r << std::endl;

}