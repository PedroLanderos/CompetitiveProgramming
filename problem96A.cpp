#include<iostream>
#include<vector>

using namespace std;

int main(int argc, char const *argv[])
{
    string word;
    int sum = 0, flag = 0;

    cin>>word;

    for (int i = 0; i < word.size(); i++)
    {
        if (word[i] == word[i + 1])
            sum++;
        else
            sum = 0;
            
        if(sum == 6)
		{
            cout<<"YES";
            flag = 1;
            break;
        }
    }

    if (flag == 0)
        cout<<"NO";
    
    return 0;
}