#include <iostream>
int main(){
    int n, x;
    std::cin >> n;
    x = n;
    int steps=0;
    int curmax = n;
    while (x != 1)
    {
        std::cout << x << " ";
        if(x%2==1)
        {
            x = 3*x+1;
        }
        else
        {
            x = x/2;
        }
        steps++;
        if(curmax < x){
            curmax = x;
        }

    }
    std::cout << x << ", reached in " << steps << " steps, maximum is " << curmax;
}