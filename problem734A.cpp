#include<iostream>
#include<vector>

using namespace std;

int main(int argc, char const *argv[])
{
    int n, a = 0, d = 0;
    string games;

    cin>>n>>games;

    for (int i = 0; i < games.size(); i++)
    {
        if(games[i] == 'A')
            a++;
        if(games[i] == 'D')
            d++;
    }

    if(a > d)
        cout<<"Anton";
    if(a < d)
        cout<<"Danik";
    if (a == d)
        cout<<"Friendship";

    return 0;
}
