#include <iostream>
#include <fstream>

int main(){
    std::ifstream txtfile;
    txtfile.open("input.txt");
    int tmp, sum = 0;
    if(txtfile.is_open())
    {
        while(txtfile >> tmp)
        {
            std::cout << tmp << std::endl;
            sum = sum + tmp;
        }
        std::cout << sum << std::endl;
    }
    else{
        std::cout << "error opening file" << std::endl;
    }
}