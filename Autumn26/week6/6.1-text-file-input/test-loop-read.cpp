#include <iostream>
#include <fstream>

int main(){
    std::ifstream txtfile;
    txtfile.open("input.txt");
    int tmp;
    if(txtfile.is_open())
    {
        while(txtfile >> tmp)
        {
            std::cout << tmp << std::endl;
        }
    }
    else{
        std::cout << "error opening file" << std::endl;
    }
}