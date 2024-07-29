#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main(int argc, char const *argv[])
{
    int y;
    cin>>y;

    int a, b, c, d;
    
    for(;;)
    {
        y++;
        a = y % 10;
        b = (y / 10) % 10;
        c = (y / 100) % 10;
        d = (y / 1000) % 10;

        if(a != b && a != c && a != d && b != c && b != d && c != d)
        {
            cout<<y;
            break;
        }
    }

    return 0;
}
