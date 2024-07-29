#include<iostream>
#include<vector>
#include<cmath>

using namespace std;

int main(int argc, char const *argv[])
{
    float n;
    int a(0), b(0), c(0), d(0), index(0), m(0), sum(0), result1(0), result2(0), output(0), sum1(0);
    cin>>n;
    vector<int> numbers((int)n);
    for(int i = 0; i < n; i++)
        cin>>numbers[i];
    
    if((int)n % 2 == 0)
        index = floor((n / 3));
    else
        index = ceil((n / 3));

    for(int i = 0; i < index; i++)
        m += numbers[i];

    c = n - 1; d = n - 1;
    
    while(b < (int)n)
    {
        sum += numbers[b];
        sum1 += numbers[d];
        if(sum1 < m)
        {
            d--;
        }
        else
        {
            result2++;
            sum = 0;
            c--;
            d--;
        }

        if(sum < m)
        {
            b++;
        }
        else
        {
            result1++;
            sum = 0;
            a++;
            b++;
        }
    }

    if(result1 >= 3)
    {
        output++;
    }

    if(result2 >= 3)
        output++;

    cout<<output<<endl;

    return 0;
}