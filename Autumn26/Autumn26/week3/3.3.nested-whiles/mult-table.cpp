#include <iostream>
int main(){
    
    int n;
    std::cin >> n;
    for(int c2=1; c2 < (n+1); c2++)
    {

    
        for(int c1=1; c1 < (n + 1); c1++){
        std::cout << c1*c2 << "\t";
        }
        std::cout << std::endl;
    }
}