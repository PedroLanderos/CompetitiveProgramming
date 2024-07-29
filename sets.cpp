#include<iostream>
#include<vector>
#include<set>

using namespace std;

int main(int argc, char const *argv[])
{
    set<int> miSet;

    miSet.insert(5); //insertar elementos en el "set"
    miSet.insert(1);
    miSet.insert(10);
    miSet.insert(5);

    for(auto it: miSet)
        cout<<it<<" "<<endl;

        
    return 0;
}
