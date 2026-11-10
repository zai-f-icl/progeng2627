#include <iostream>
#include <vector>
void merge_vectors_int(const std::vector<int>&vin1, const std::vector<int>&vin2, std::vector<int>&vout)
{
    int tempa = 0;
    int tempb = 0;
    std::cout << "debug" << std::endl;
    for(int i=0; i<(vin1.size()+vin2.size()); i++)
    {
        // this while is neccessary so we dont try to pull from an undefined vector element
        while(tempa<vin1.size()&&tempb<vin2.size())
        {


        if (vin1[tempa]<vin2[tempb])
        {
            vout.push_back(vin1[tempa]);
            tempa++;

        }
        else 
        {
            vout.push_back(vin2[tempb]);
            tempb++;
        }
        // there will be leftover values
        }
        while(tempa<vin1.size())
        {
            vout.push_back(vin1[tempa]);
            tempa++;
        }
        while(tempb<vin2.size())
        {
            vout.push_back(vin2[tempb]);
            tempb++;
        }

    }
}
int main(){

    std::vector<int> v1;
    std::vector<int> v2;
    std::vector<int> out;

    std::vector<int> expected_output;

    v1 = {1, 3, 5, 6};
    v2 = {4, 6, 10};
    expected_output = {1, 3, 4, 5, 6, 6, 10};

    merge_vectors_int(v1, v2, out);

    if(out == expected_output){ // we can compare the content of vectors (at least in some cases)
        std::cout << "passed" << std::endl;
    }
    else{
        std::cout << "not passed" << std::endl;
    }
}