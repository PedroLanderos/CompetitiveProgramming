#include<vector>
#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    string word;
    int sum, upper = 0, lower = 0;
    cin>>word;

    for (int i = 0; i < word.size(); i++)
    {
        if(isupper(word[i]))
            upper++;
        if(islower(word[i]))
            lower++;
    }

    if(upper > lower)
    {
        for(char& letter : word)
            letter = toupper(letter);
    }
    else if(upper < lower)
    {
        for(char& letter : word)
            letter = tolower(letter);
    }
    else if(upper == lower)
    {
        for(char& letter : word)
            letter = tolower(letter);
    }

    cout<<word;



    
    return 0;
}
