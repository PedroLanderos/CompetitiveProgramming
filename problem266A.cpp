#include<iostream>
#include<vector>

using namespace std;

int main(int argc, char const *argv[])
{
    int numberOfStones, total = 0;
    string colors;
    char lastColor;

    cin>>numberOfStones>>colors;

    for (int i = 0; i < numberOfStones; i++)
    {
        lastColor = colors[i];
        if(colors[i + 1] == lastColor)
            total++;
    }

    cout<<total<<"\n";
    

    return 0;
}
