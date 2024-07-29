#include<iostream>
#include<cmath>

using namespace std;

int main(int argc, char const *argv[])
{
    long double  n, m, a, solution = 1;
    cout.precision(22);
    cin>>n>>m>>a;

    long double temp = ceil(n / a);
    solution *= temp;

    temp =  ceil(m / a);
    solution *= temp;

    cout<<solution; 

    return 0;
}
 