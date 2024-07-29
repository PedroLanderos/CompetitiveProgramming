#include<iostream>
#include<vector>

using namespace std;

int main(int argc, char const *argv[])
{
    int n, value = 0;
    vector<string> statement;

    cin>>n;

    for(int i = 0; i < n; i++)
    {
        string temp; 
        cin>>temp;
        statement.push_back(temp);
    }

    for(int i = 0; i < n; i++)
    {
        if (statement[i] == "X++" || statement[i] == "++X")
            value++;
        else if (statement[i] == "X--" || statement[i] == "--X")
            value--;
    }

    cout<<value<<"\n";

    return 0;
}
