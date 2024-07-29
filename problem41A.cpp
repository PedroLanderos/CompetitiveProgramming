#include<iostream>
#include<vector>

using namespace std;

int main(int argc, char const *argv[])
{
    string word1, word2;
    cin>>word1>>word2;
    int j, flag = 0;

    j  = word2.size() - 1;

    for (int i = 0; i < word1.length(); i++)
    {   
        if(word1[i] != word2[j])
            flag = 1;  
        j--;
    }

    if(flag == 1)
        cout<<"NO";
    else 
        cout<<"YES";
    
    return 0;
}