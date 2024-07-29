#include<iostream>
#include<vector>

using namespace std;

int main(int argc, char const *argv[])
{
    int a, b , result = 0;
    cin>>a>>b;

    while(a <= b)
    {
        a = a * 3;
        b = b * 2;
        result++;
    }

    cout<<result<<"\n";

    return 0;
}
