#include <iostream>
#include<vector>

using namespace std;

/*go through the word and find the caracters, save them into a vector and do a ++ and continue the comparision
if the character is repeated, the sum value'll be the same
otherwise, it will increase*/

bool IsNotDuplicated(char letter, vector<char> letters)
{
    for (int i = 0; i < letters.size(); i++)
    {
        if(letters[i] == letter)
            return false;
    }

    return true;
    
}

int main(int argc, char const *argv[])
{
    int sum = 0;
    string username;
    cin>>username;
    vector<char> letters;

    for (int i = 0; i < username.size(); i++)
    {
        if (i == 0)
        {
            sum++;
            letters.push_back(username[i]);
        }
        else
        {
            if(IsNotDuplicated(username[i], letters))
            {
                sum++;
                letters.push_back(username[i]);
            }
        }
    }

    if(sum % 2 == 0)
        cout<<"CHAT WITH HER!\n";
    else
        cout<<"IGNORE HIM!\n";

    return 0;
}