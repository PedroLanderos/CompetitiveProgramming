#include<iostream>
#include<vector>
#include<algorithm>
#include<math.h>

using namespace std;

int main(int argc, char const *argv[])
{
    long long n, k;

    cin>>n>>k;
 
    if(k <= (n + 1) / 2)
        cout<<((k * 2) - 1)<<endl;
    else
        cout<<2 * (k - (n+1)/2)<<endl;

    return 0;
}
