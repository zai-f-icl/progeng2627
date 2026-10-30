// Extend the program so that it also prints all the indices (if any) where s is found. 

#include <iostream>
#include <vector>

int main(){
    int n, temp, s;
    std::cout << "Please enter n:" << std::endl;
    std::cin >> n;
    std::vector<int> v;
    std::vector<int> occ_index;
    for(int i=0; i < n; i++)
    {
        std::cout << "please enter a number: " << std::endl;
        std::cin >> temp;
        v.push_back(temp);

    }
    std::cout << "please enter s:" << std::endl;
    std::cin >> s;
    int occurences = 0;
    for(int i=0; i<n; i++)
    {
        if(v[i] == s)
        {
            occurences = occurences + 1;
            occ_index.push_back(i);
        }
    }
    if(occurences==0)
    {
            std::cout << "there are " << "no" << " occurrences of " << s << std::endl;
    }
    else{
        std::cout << "there are " << occurences << " occurrences of " << s << " at indices: "<< std::endl;
        for(int i=0; i< occ_index.size(); i++)
        {
            std::cout << occ_index[i] << std::endl;
        }
    }
    
}