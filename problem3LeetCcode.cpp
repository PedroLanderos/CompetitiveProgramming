#include<iostream>
#include<vector>

using namespace std;

int main(int argc, char const *argv[])
{
    string s, length = 0;
    cin>>s;

    for (int i = 0; i < s.size(); i++)
    {
        if(s[i] != s[i + 1])
        {

            length++;
        }
    }
    

    return 0;
}
