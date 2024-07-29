#include<iostream>
#include<vector>

using namespace std;

int main(int argc, char const *argv[])
{
    long long int n;
    cin>>n;
    long long int answer;
    
    if(n % 2 != 0)
        answer = (n / 2 + 1) * (-1);
    else
        answer = (n / 2);
 
    cout<<answer<<endl;
    
	return 0;
}