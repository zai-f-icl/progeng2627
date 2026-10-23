#include <iostream>

int main(){
    int n;
    std::cin >> n;

    // n times we draw one row
    // note that we need a different variable
    // for the loop counter
  int c1 = 0, c2 = 0;
  while(c2 < n){
    while(c1 < n)
    {
        std::cout << "*";
        c1++;
    }
    c1 = 0;
    std::cout << std::endl;
    c2++;
}
}