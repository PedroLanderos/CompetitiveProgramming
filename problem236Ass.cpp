#include <iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
    int sum = 0;
    string username;
    cin>>username;

    sort(username.begin(), username.end());

    for (int i = 0; i < username.size(); i++)
    {
        if(username[i] != username[i + 1])
            sum++;
    }

    if(sum % 2 == 0)
        cout<<"CHAT WITH HER!\n";
    else
        cout<<"IGNORE HIM!\n";
    
    return 0;
}
