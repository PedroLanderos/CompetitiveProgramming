#include<iostream>
#include<vector>

using namespace std;

int main(int argc, char const *argv[])
{
    int n, t;
    string queue;
    cin>>n>>t>>queue;

    for (int i = 0; i < t; i++)
    {
        for (int j = 0; j < queue.size(); j++)
        {
            if(queue[j] == 'B' && queue[j + 1] == 'G')
            {
                char temp = queue[j];
                queue[j] = queue[j + 1];
                queue[j + 1] = temp;
                j++;
            }
        }
    }
    
    cout<<queue<<"\n";
    return 0;
}