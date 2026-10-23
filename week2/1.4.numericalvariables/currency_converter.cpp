// Write a program which reads from the user
//
//    an amount of money in British Pounds
//    the current exchange rate to Euros
// 
// and prints the equivalent amount in Euros. 
#include <iostream>
int main(){
    double GBP, exchange_rate;
    std::cout << "This is a currency converter." << std::endl;
    std::cout << "What is the amount of money in GBP you are trying to convert?" << std::endl;
    std::cin >> GBP;
    std::cout << "What is the current exchange rate GBP/Euro?";
    std::cin >> exchange_rate;
    std::cout << GBP << " British pounds converts to " << GBP / exchange_rate << " Euros.";
}