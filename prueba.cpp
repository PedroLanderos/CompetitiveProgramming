#include <iostream>
#include <vector>

using namespace std;

int Addition()
{
    int a, b;

    cin>>a;
    cin>>b;
    return a + b;
}
int main(int argc, char const *argv[])
{
    int resultado = Addition(); 

    cout<<resultado;

    return 0;
}

