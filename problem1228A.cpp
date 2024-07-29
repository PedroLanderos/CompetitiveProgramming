#include<iostream>
#include<vector>
#include<set>
#include<string>

using namespace std;

int main(int argc, char const *argv[])
{
    int l, r;
    cin>>l>>r;
    set<char> number;
    for (int i = l; i <= r; i++)
    {
        string aux = to_string(i);
        for (int j = 0; j < aux.length(); i++)
            number.insert(aux[j]);

        if(number.size() == aux.length())
            cout<<aux<<endl;
            return 0;
        
    }

    cout<<"-1"<<endl;
    
    return 0;
}
