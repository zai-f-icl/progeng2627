#include <iostream>

int main(){
    int n, out = 1, x = 0;
    std::cin >> x >> n;
    for(int i=0; i<n; i++)
    {   
        out = out * x;
    }
    std::cout << "x^n = " << out << std::endl;
}