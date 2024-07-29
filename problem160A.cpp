#include<iostream>
#include<vector>
#include<numeric>
#include<algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
    int n, total = 0, coins = 0, sum = 0;;
    vector<int> values;
    cin>>n;

    for (int i = 0; i < n; i++)
    {
        int aux;
        cin>>aux;
        values.push_back(aux);
    }

    total = accumulate(values.begin(), values.end(), 0);   
    //sort(values.begin(), values.end(), greater<int>()); //ordenar el vector de mayor a menor

    for (int i = 0; i < n; i++)
    {
        sum += values[i];
        coins++;
        total -= values[i];

        if(sum > total)
            break;
    } 

    cout<<coins;

    return 0;
}