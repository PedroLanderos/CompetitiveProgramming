#include <iostream>
#include<vector>

using namespace std;

int main(int argc, char const *argv[])
{
    int n, k, kValue, total = 0;
    vector<int> scores;
    cin>>n>>k;

    for(int i = 0; i < n; i++)
    {
        int temp;
        cin>>temp;
        scores.push_back(temp);
        if (i == (k - 1))
            kValue = temp;
    }

    for(int i = 0; i < n; i++)
    {
        if(scores[i] >= kValue && scores[i] > 0)
            total++;
    }

    cout<<"\n\n"<<total; 

    return 0;
}
