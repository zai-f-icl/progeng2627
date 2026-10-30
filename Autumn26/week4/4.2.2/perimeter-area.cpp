#include <iostream>

void rectangler(double length, double width, double& perimeter, double&area)
{
    perimeter = 2*(length + width);
    area = length * width;
}

int main()
{
    double s1, s2, peri, area;
    std::cout << "Enter the length and width of your rectangle" << std::endl;
    std::cin >> s1 >> s2;
    rectangler(s1, s2, peri, area);
    std::cout << peri << "and area is: " << area << std::endl;
}