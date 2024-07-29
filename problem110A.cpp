#include<iostream>
#include<vector>
#include<string>

using namespace std;


int main(int argc, char const *argv[])
{
    long long int number;
    int total = 0;

    cin>>number;

    while(number > 0)
    {
        int temp = number % 10;
        if(temp == 4 || temp == 7)
            total++;
        number = number / 10;
    }

    if(total == 7 || total == 4)
        cout<<"YES";
    else
        cout<<"NO";

    return 0;
}
