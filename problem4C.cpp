#include<iostream>
#include<vector>
#include<map>

using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    map<string, int> bucket;

    string aux;
    for (int i = 0; i < n; i++)
    {
        cin>>aux;
        bucket[aux]++;
        if(bucket.find(aux)->second > 1)
            cout<<bucket.find(aux)->first<<bucket.find(aux)->second - 1<<endl;
        else
            cout<<"OK"<<endl;
    }
    
    return 0;
}
