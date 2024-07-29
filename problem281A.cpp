#include<iostream>
#include<vector>

using namespace std;

int main(int argc, char const *argv[])
{
    string word;
    cin>>word;

    word[0] = toupper(word[0]);

    cout<<word<<"\n";

    return 0;
}
