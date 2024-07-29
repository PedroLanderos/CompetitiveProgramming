#include<iostream>
#include<vector>
#include<map>

using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    map<int, int> answer;

    for (int i = 0; i < n; i++)
    {
        int aux;
        cin>>aux;
        answer[aux] = i;
    }

    for (auto it:answer)
        cout<<it.second + 1<<" ";
    
    return 0;
}
