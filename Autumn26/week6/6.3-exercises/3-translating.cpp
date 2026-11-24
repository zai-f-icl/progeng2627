#include <fstream>
#include <cstdlib>
#include <vector>
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
int search_vector(const std::vector<std::string>& vin, std::string key, int& position)
{
    for(int i=0; i<vin.size(); i++)
    {
        if(vin[i]==key)
        {
            position=i;
            return 1;
        }
    }
    return 0;
    // returns 1 if present and sets the 3rd input to the position
}

int main(){
    std::vector<std::string> advertisement, rosetta_in, rosetta_out, translated_output;
    std::ifstream infile;
    // put the infile into the text vector
    infile.open("advertisement.txt");
    if (!infile.is_open())
    {
        return EXIT_FAILURE;
    }
    std::string tempword;
    while (infile >> tempword)
    {
        advertisement.push_back(tempword);
    }
    infile.close();
    // split the 2nd text file alternating between 2 vectors, rosetta in and out
    infile.open("rosetta.txt");
    if (!infile.is_open())
    {
        return EXIT_FAILURE;
    }
    int i=0;
    while (infile >> tempword)
    {
        if(i%2==0){
            rosetta_in.push_back(tempword);
        }
        else{
            rosetta_out.push_back(tempword);
        }
        i++;
    }
    infile.close();
    // read the advertisement vector
    int pos = 0;
    std::ofstream outfile;
    outfile.open("translated.txt");
    for(int i=0; i<advertisement.size(); i++)
    {
        if(search_vector(rosetta_in, advertisement[i], pos))
        {
            outfile << rosetta_out[pos] << " ";
        }
        else{
            outfile << advertisement[i] << " ";
        }
    }
}