#include<iostream>
#include<vector>
#include<algorithm>
#include<list>

using namespace std;

int main(int argc, char const *argv[])
{
    int n, m, pairs = 0, last = -1;
    cin >> n;
    vector<int> boys(n);
    for (int i = 0; i < n; i++)
        cin >> boys[i];

    cin >> m;
    vector<int> girls(m);
    for (int i = 0; i < m; i++)
        cin>>girls[i];
    
    sort(girls.begin(), girls.end(), greater<int>());
    sort(boys.begin(), boys.end(), greater<int>());

    for (int i = 0; i < boys.size(); i++)
    {
        if(find(girls.begin(), girls.end(), boys[i] + 1) != girls.end())
            {
                pairs++;
                int position = distance(girls.begin(), find(girls.begin(), girls.end(), boys[i] + 1));
                girls[position] = -1;
                continue;
            }   
         if(find(girls.begin(), girls.end(), boys[i]) != girls.end())
            {
                pairs++;
                int position = distance(girls.begin(), find(girls.begin(), girls.end(), boys[i]));
                girls[position] = -1;
                continue;
            }
            if(find(girls.begin(), girls.end(), boys[i] - 1) != girls.end())
            {
                pairs++;
                int position = distance(girls.begin(), find(girls.begin(), girls.end(), boys[i] - 1));
                girls[position] = -1;
                continue;
            } 
            
    }

    cout << pairs << endl;
    
    
    return 0;
}