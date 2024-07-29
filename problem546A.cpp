#include<iostream>
#include<vector>

using namespace std;

int main(int argc, char const *argv[])
{
    int k, n, w, amount = 0;;
    cin>>k>>n>>w;

    for (int i = 0; i < w; i++)
        amount += (k * (i + 1));

    if (amount < n)
        cout<<"0";
    else
        cout<<amount - n;
    
    return 0;
}
