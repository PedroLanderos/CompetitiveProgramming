#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main(int argc, char const *argv[])
{
    string s;
    cin>>s;
    int j = 0;
    string word = "hello";
    char elementToFind;;

    for (int i = 0; i < s.size(); i++)
    {
        elementToFind = word[j];
        if(s[i] == elementToFind)
        {
            j++;
            if(j == 5)
                break;
        }
    }

    if(j == 5)
        cout<<"YES";
    else    
        cout<<"NO";
    
    return 0;
}