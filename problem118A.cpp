#include<iostream>
#include<vector>
 
using namespace std;

bool IsAVowel(char letter, vector<char> vowels)
{
    for (int i = 0; i < vowels.size(); i++)
    {
        if(letter == vowels[i] || letter == tolower(vowels[i]))
            return true;
    }

    return false;   
}

int main(int argc, char const *argv[])
{
    string word;
    cin>>word;
    vector<char> vowels = {'A', 'O', 'Y', 'E', 'U', 'I'};

    for (int i = 0; i < word.size(); i++)
    {
        if(IsAVowel(word[i], vowels))
        {
            word.erase(i, 1);
            i--;
        }
    }

    for (int i = 0; i < word.size(); i++)
        word[i] = tolower(word[i]);

    for (int i = 0; i < word.size(); i++)
        cout<<"."<<word[i];
        
    return 0;
}
 