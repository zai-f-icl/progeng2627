// Write a program that reads from the user the length of two 
// (different) sides of a rectangle and prints its perimeter and area.
#include <iostream>
int main(){
    double length, width, area, perimeter;
    std::cout << "This is a rectangle calculator." << std::endl;
    std::cout << "What is the length of your rectangle?" << std::endl;
    std::cin >> length;
    std::cout << "What is the width of your rectangle?" << std::endl;
    std::cin >> width;
    perimeter = length * 2 + width * 2;
    area = length * width;
    std::cout << "The perimeter of your rectangle is " << perimeter << " and its area is " << area << std::endl;
}