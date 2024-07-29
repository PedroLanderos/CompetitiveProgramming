#include<iostream>
#include<vector>

using namespace std;

int main(int argc, char const *argv[])
{
    int n, total = 0;
    cin>>n;

    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin>>a>>b;

        if((b - a) >= 2)
            total++;
    }

    cout<<total;
    
    return 0;
}
