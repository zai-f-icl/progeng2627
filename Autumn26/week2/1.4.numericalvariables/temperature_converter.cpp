// Write a program which reads from the user a temperature in Celsius degrees and prints the equivalent temperature in Fahrenheit degrees.
#include <iostream>
int main(){
    double celsius, fahrenheit;
    std::cout << "Enter a value in degrees Celsius, and I will convert it into Fahrenheit." << std::endl;
    std::cin >> celsius;
    fahrenheit = celsius * 1.8 + 32;
    std::cout << celsius << " degrees Celsius is equal to " << fahrenheit << " degrees Fahrenheit." << std::endl;
}