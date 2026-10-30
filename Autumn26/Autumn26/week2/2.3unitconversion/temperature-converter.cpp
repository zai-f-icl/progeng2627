#include <iostream>

int main(){
    double input_temp, output_temp;
    std::string input_unit, output_unit;
    std::cin >> input_temp >> input_unit;
    bool valid_unit = true;
    if ( (input_unit == "C") || (input_unit == "c") )
    {
        output_unit = "F";
        output_temp = (input_temp * 1.8) + 32;
    }
    else if ((input_unit == "F") || (input_unit =="f"))
    {
        output_unit = "C";
        output_temp = (input_temp - 32) / 1.8;
    }
    else {
        valid_unit = false;
    }
    if (valid_unit == true)
    {
        std::cout << output_temp << output_unit << std::endl;
    }
    else {
        std::cout << "Invalid unit! Only use C or F.";
    }
    
    
}