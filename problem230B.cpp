#include<iostream>
#include<vector>
#include<algorithm>
#include<math.h>

using namespace std;

bool esPrimo(long long numero) {
    if (numero <= 1) return false;
    if (numero == 2) return true;   
    if (numero % 2 == 0) return false;

    long long limite = sqrt(numero);
    for (long long i = 3; i <= limite; i += 2) {
        if (numero % i == 0) return false;
    }

    return true;
}

int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    vector<long long> numbers(n);

    for(int i = 0; i < n; i++)
        cin>>numbers[i];

    for (int i = 0; i < n; i++)
    {
        double raiz = sqrt(numbers[i]);
        if (raiz == floor(raiz) && esPrimo(static_cast<long long>(raiz)))
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    
    return 0;
}
