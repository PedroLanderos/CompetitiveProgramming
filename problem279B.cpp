#include<iostream>
#include<vector>

using namespace std;

int main(int argc, char const *argv[])
{
    int n, m, a, b, result(0), sum(0), max(0);
    cin>>n>>m;
    vector<int> minutes(n);
    for (int i = 0; i < n; i++)
        cin>>minutes[i];

    a = 0; b = 0;

    while(b <= n)
    {
        if(b < n)
            sum += minutes[b];        

        if(result > max)
            max = result;

        if(sum <= m)
        {
            result++;
            b++;
        }
        else
        {
            sum -= minutes[a];
            a++;
            if(a == b)
                b++;
            else
            {
                sum -= minutes[b];
                result--;
            }
        }
    }

    cout<<max<<endl;
    
    return 0;
}