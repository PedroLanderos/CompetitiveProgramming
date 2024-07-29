#include<iostream>
#include<vector>
#include<deque>

using namespace std;

int main()
{
    int n, sum1 = 0, sum2 = 0, a, b;
    cin>>n;
    deque<int> numbers;
    
    for (int i = 0; i < n; i++)
    {
        int aux;
        cin>>aux;
        numbers.push_front(aux);
    }
    
    int i = 2;
    while(!numbers.empty())
    {
        a = numbers.back(); //primer elemento
        b = numbers.front(); //ultimo elemento
        
        if(i % 2 == 0) //primer turno
        {
            if(a >= b)
            {
                sum1 += a;
                numbers.pop_back();
            }
            else
            {
                sum1 += b;
                numbers.pop_front();
            }
        }
        else
        {
            if(a >= b)
            {
                sum2 += a;
                numbers.pop_back();
            }
            else
            {
                sum2 += b;
                numbers.pop_front();
            }
        }
        i++;
    }

    cout<<sum1<<" "<<sum2<<endl;

    return 0;
} 