#include<iostream>
#include<vector>

using namespace std;

int main(int argc, char const *argv[])
{
    int n, groups = 0, lastPole;
    cin>>n;

    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin>>a;

        b = a % 10;

        if(i == 0)
            groups++;
        else
        {
            if(b != lastPole)
                groups++;
        }
        lastPole = b;
    }

    cout<<groups;
    
    return 0;
}