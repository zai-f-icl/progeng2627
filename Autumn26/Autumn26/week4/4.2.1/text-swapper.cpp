#include <iostream>

void swap_text(std::string& n1, std::string& n2)
{
    std::string temp;
    temp = n1;
    n1 = n2;
    n2 = temp;
}

int main()
{
    std::string str1, str2;
    std::cout << "enter your first string:" << std::endl;
    std::cin >> str1;
    std::cout << "enter your second string:" << std::endl;
    std::cin >> str2;
    swap_text(str1, str2);
    std::cout << str1 << "2nd string:" << str2 << std::endl;
}