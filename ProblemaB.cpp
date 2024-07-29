#include<iostream>
#include <vector>
#include <algorithm>

using namespace std;


int FindValue(vector<int> cookies, int n)
{
    int number = 0;

    for (int i = 0; i < n; i++)
    {
        if (i == 0 )
            number = cookies[i];
        else
        {
            if (cookies[i] < number)
                number = cookies[i];
        }
    }
    return number;
}

void Solution()
{
    int suma = 0, aux = 0, n, minimum;
    vector<int> cookies;

    cin>>n;

    for(int i = 0; i < n; i++)
    {
        int temp;
        cin>>temp;
        cookies.push_back(temp);
    }

    minimum = FindValue(cookies, n);

     for(int i = 0; i < n; i++)
     {
        aux = cookies[i] - minimum;
        suma = suma + aux;
     }

     cout<<suma<<"\n";


}  

int main(int argc, char const *argv[])
{
    int t, n;
    cin>>t;

    while(t--)
    {
        Solution();
    }


    return 0;
}
