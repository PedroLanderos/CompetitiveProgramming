#include<iostream>
#include<map>
#include<vector>

using namespace std;

int main(int argc, char const *argv[])
{
    map<int, int> miMap;

    miMap[10] = 4;
    miMap[2] = 3;
    miMap[1] = 34;

    for(auto it:miMap)
        cout<<it.second<<endl;

    map<string, vector<char>> dias;

    dias["Lunes"] = {'l','u', 'n', 'e','s'};

    for(auto it:dias)
    {
        cout<<it.first<<endl;
        for(auto it2:it.second)
            cout<<it2<<endl;
    }

    
    return 0;
}
