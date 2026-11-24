#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <sstream>
#include <iomanip>

std::vector<double> line_to_vector(std::string line){
    std::stringstream linestream;
    linestream << line;
    std::string temp;
    std::vector<double> vout;
    while(linestream >> temp)
    {
        vout.push_back(std::stod(temp));
    }
    return vout;
}

std::vector<std::vector<double>> read_matrix_from_file(std::string filename){
    std::ifstream infile;
    std::vector<std::vector<double>> vout;
    infile.open(filename);
    if (!infile.is_open())
    {
        std::cout << "error opening file!";
        std::exit(EXIT_FAILURE);
    }
    std::string templine;
    while(std::getline(infile, templine))
    {
        vout.push_back(line_to_vector(templine));
    }
    return vout;
}
double scalar_product(const std::vector<double>& vin1, const std::vector<double>& vin2){
    double scalar_out;
    for (int i=0; i<vin1.size(); i++)
    {
        scalar_out = scalar_out + vin1[i]*vin2[i];
    }
    return scalar_out;
}
std::vector<double> matrix_extract(const std::vector<std::vector<double>>& matrixin, int columnno)
{
    std::vector<double> out;
    for (int i=0; i< matrixin.size(); i++)
    {
        out.push_back(matrixin[i][columnno]);
    }
    return out;
}

std::vector<std::vector<double>> matrix_multiplicatinator(const std::vector<std::vector<double>>& matrixin1, const std::vector<std::vector<double>>& matrixin2)
{
    // multiply the rows of the left matrix with the columns of the right matrix.
    double matrix_product_cell;
    // i is row number and j is column number if i did it correctly
    std::vector<std::vector<double>> matrix_product;
    std::vector<double> tempvector = {};
    for(int i=0; i<matrixin1.size(); i++)
    {
        tempvector.clear();
        for(int j=0; j<matrixin2[0].size(); j++)
        {
            
        tempvector.push_back(scalar_product(matrixin1[i], matrix_extract(matrixin2, j)));
        }
        matrix_product.push_back(tempvector);
    
    }
    return matrix_product;
}
std::string matrix_to_string(std::vector<std::vector<double>> matrixin)
{
    std::stringstream ss;
    ss << std::fixed << std::setprecision(2);
    for (int i = 0; i < matrixin.size(); i++)
    {
        for(int j = 0; j<matrixin[i].size(); j++)
        {
            ss << matrixin[i][j] << "\t";
        }
        ss << "\n";
    }
    return ss.str();
}

int main(int argc, char* argv[])
{
    std::vector<std::vector<double>> m1 = read_matrix_from_file(argv[1]);
    std::vector<std::vector<double>> m2 = read_matrix_from_file(argv[2]);
    std::vector<std::vector<double>> m3 = matrix_multiplicatinator(m1,m2);
    std::cout << matrix_to_string(m1) << std::endl;
    std::cout << "multiplied by" << std::endl;
    std::cout << matrix_to_string(m2) << std::endl;
    std::cout << "=" << std::endl;
    std::cout << matrix_to_string(m3) << std::endl;
}