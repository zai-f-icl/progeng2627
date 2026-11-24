#include <iostream>
#include <vector>
#include <fstream>
#include <cstdlib>
int counter(const std::vector<std::string>& vin, std::string keyword)
{
    int sum = 0;
    for(int i=0; i<vin.size(); i++)
    {
        if(vin[i]==keyword)
        {
            sum++;
        }
    }
    return sum;
}
int text_to_vector(std::string filename, std::vector<std::string>& targetvector)
{
    std::ifstream infile;
    // put the infile into the text vector
    infile.open(filename);
    if (!infile.is_open())
    {
        return EXIT_FAILURE;
    }
    std::string tempword;
    while (infile >> tempword)
    {
        targetvector.push_back(tempword);
    }
    infile.close();
    return 1;
}
int main()
{
    std::vector<std::string> textctor{}, keyctor{};
    text_to_vector("text.txt", textctor);
    text_to_vector("words.txt", keyctor);
    std::ofstream outfile;
    outfile.open("output.txt");
    for (int i=0; i<keyctor.size(); i++)
    {
        outfile << keyctor[i] << ": " << counter(textctor, keyctor[i]) << std::endl;
    }   
    // debug print the whole textctor
    // for(int i=0; i<textctor.size(); i++)
    // {
    //     std::cout << textctor[i];
    // }


}