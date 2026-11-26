#include <iostream>
#include <vector>

std::string getcol(const std::vector<std::string>& grid, int colnum)
{
    std::string out;
    out.clear();
    for (int i = 0; i < grid.size(); i++)
    {
        out.push_back(grid[i][colnum]);
    }
    return out;
}
// checks if this character actually has the full word
bool check_for_word(std::string in, std::string word, int pos)
{
    for (int i = 0; i < word.size(); i++)
    {
        if((pos+i)>=in.size())
        {
            return false;
        }
        if (in[pos+i]!=word[i])
        {
            return false;
        }
        
    }
    return true;
    
}

// returns the position of the word in the row or column if found, -1 if not.
int word_position(std::string in, std::string word)
{
    for (int i = 0; i < in.size(); i++)
    {
        if(in[i]==word[0]&&check_for_word(in, word, i))
        {
            return i;
        }
    }
    return -1;
}
bool present_in_vector(const std::vector<std::string>& vin, std::string key)
{
    for(int i = 0; i<vin.size(); i++)
    {
        if (vin[i]==key)
        {
            return true;
        }
        
    }
    return false;
}
void vector_subtract(const std::vector<std::string>& vin1, const std::vector<std::string>& vin2, std::vector<std::string>& vout)
{
    for(int i = 0; i<vin1.size();i++)
    {
        if(!present_in_vector(vin2, vin1[i]))
        {
            vout.push_back(vin1[i]);
        }
    }
}


void find_words(
    const std::vector<std::string>& grid, 
    const std::vector<std::string>& words,
    std::vector<std::string>& solution,
    std::vector<std::string>& not_found
)
{
    std::vector<std::string> found;
    // make a blank output grid with #s first
    std::string temphash;
    for (int i = 0; i < grid[0].size(); i++)
    {
        temphash.push_back('#');
    }
    for (int i = 0; i<grid.size(); i++)
    {
       solution.push_back(temphash); 
    }
    // for every row
    for (int i = 0; i < grid.size(); i++)
    {
        // for every word in the wordlist
        for (int wordnum = 0; wordnum < words.size(); wordnum++)
        {
            // if the word exists
            int wordpos = word_position(grid[i], words[wordnum]);
            if(wordpos!=-1)
            {
                found.push_back(words[wordnum]);
                // and then replace the hashtags there with the word
                for (int j = 0; j < words[wordnum].size(); j++)
                {
                    solution[i][j+wordpos]=words[wordnum][j];
                }
                
            }
        }
    }
    // for every column
    for (int coli=0; coli<grid[0].size(); coli++)
    {
        for (int wordnum = 0; wordnum < words.size();wordnum++)

        {
            int wordpos = word_position(getcol(grid, coli), words[wordnum]);
            if (wordpos!=-1)
            {
                found.push_back(words[wordnum]);
                for(int j = 0; j<words[wordnum].size(); j++)
                {
                solution[wordpos+j][coli] = words[wordnum][j];
                }
            }

        }
        
    }
    vector_subtract(words, found, not_found);    
}

int main(){

    std::vector<std::string> grid = {
        "xappleg",
        "dzeazkg",
        "zwazzbx",
        "dxnqzoy",
        "qyueytp",
        "pythtyg"
    };

    std::vector<std::string> words = {"peanut", "bot", "mango", "apple", "cinnamon"};
    std::vector<std::string> solution;
    std::vector<std::string> not_found;

    find_words(grid, words, solution, not_found); 

    std::vector<std::string> expected_solution = {
        "#apple#",
        "##e####",
        "##a##b#",
        "##n##o#",
        "##u##t#",
        "##t####"
    };

    std::vector<std::string> expected_not_found = {"mango", "cinnamon"};

    if( (solution == expected_solution) && (not_found == expected_not_found) ){
        std::cout << "test passed" << std::endl;
    }
    else{
        std::cout << "test failed" << std::endl;
    }

    std::cout << "solution:" << std::endl;
    for(int i = 0; i < solution.size(); i++){
        std::cout << solution[i] << std::endl;
    }

    std::cout << "not found:" << std::endl;
    for(int i = 0; i < not_found.size(); i++){
        std::cout << not_found[i] << std::endl;
    }

}