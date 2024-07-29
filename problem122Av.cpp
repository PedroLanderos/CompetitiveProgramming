#include<iostream>
#include<vector>

using namespace std;

bool isLucky(int n)
{
    while(n > 0)
    {
        int aux;
        aux = n % 10;
        if(aux == 7 || aux == 4)
            n = n / 10;
        else
            return false;
    }

    return true;
}

bool isAlmostLucky(int n)
{
    if (n % 4 == 0 || n % 7 == 0 || n % 47 == 0 || n % 77 == 0 || n % 74 == 0)
        return true;

    return false;
    
}

int main(int argc, char const *argv[])
{
    int n;
    cin>>n;

    if((isLucky(n)) || isAlmostLucky(n))
        cout<<"YES";
    else
        cout<<"NO";

    return 0;
}
