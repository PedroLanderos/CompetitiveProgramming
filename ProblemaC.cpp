#include <iostream>
#include<vector>

using namespace std;

bool Par(vector<int> numbers, int tam) {
    bool primerParEsPar = numbers[0] % 2 == 0;

    for (int i = 2; i < tam; i += 2) {
        if ((numbers[i] % 2 == 0) != primerParEsPar) {
            return false;
        }
    }

    return true;
}

bool Impar(vector<int> numbers, int tam) {
    bool primerImparEsPar = numbers[1] % 2 == 0;

    for (int i = 3; i < tam; i += 2) {
        if ((numbers[i] % 2 == 0) != primerImparEsPar) {
            return false;
        }
    }

    return true;
}

void Solution()
{
    int n, flag = 0, par = 0, impar = 0;
    cin>>n;

    vector<int> numbers;

    for(int i = 0; i < n; i++)
    {
        int temp;
        cin>>temp;
        numbers.push_back(temp);
    }
    
    if (Par(numbers, n) && Impar(numbers, n))
        cout<<"YES"<<"\n";
    else
        cout<<"NO"<<"\n";
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
