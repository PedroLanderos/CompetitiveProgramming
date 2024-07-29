#include<iostream>
#include<vector>
#include <cctype>

using namespace std;

string convertirAMinusculas(string palabra)
{
    for(int i = 0; i < palabra.size(); i++)
    {
        char aux = palabra[i];
        aux = tolower(aux);
        palabra[i] = aux;
    }

    return palabra;
}
int main(int argc, char const *argv[])
{
    string first, second;
    cin>>first>>second;

    first = convertirAMinusculas(first);
    second = convertirAMinusculas(second);

    if(first == second)
        cout<<"0";
    if(first > second)
        cout<<"1";
    if(first < second)
        cout<<"-1";

    return 0;
}
