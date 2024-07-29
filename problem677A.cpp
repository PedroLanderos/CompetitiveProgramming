#include<iostream>
#include<vector>

using namespace std;

int main(int argc, char const *argv[])
{
    int n, h, sum = 0;
    cin>>n>>h;

    for (int i = 0; i < n; i++)
    {
        int aux;
        cin>>aux;
        if(aux > h)
            sum+=2;
        else
            sum++;
    }
    cout<<sum;
    

    return 0;
}