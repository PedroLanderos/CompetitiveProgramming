#include<iostream>
#include<vector>

using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    string word = "EASY";

    for (int i = 0; i < n; i++)
    {
        int temp;
        cin>>temp;

        if(temp == 1)
            word = "HARD";
    }

    cout<<word;
    
    return 0;
}
