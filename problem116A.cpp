#include<iostream>
#include<vector>

using namespace std;

int main(int argc, char const *argv[])
{
    int n, total = 0;
    cin>>n;
    int maximum = 0;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin>>a>>b;
        
        total = total - a + b;
        if(total > maximum)
            maximum = total;
    }

    cout<<maximum;
    
    return 0;
}
