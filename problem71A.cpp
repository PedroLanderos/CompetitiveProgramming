#include <iostream>
#include <vector>

//pasos para resolverlo: Ver si es menor que 10, si lo es solo imprimir la palabra.
//ver si es mayor, si es mayor almacenar la primera y la ultima posicion, despues contar desde el segundo hasta el penultimo y aumentar 

using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    vector<string> nombres;

    do
    {
        cin>>n;
    }while(n < 1 || n > 100);

    for(int i = 0; i < n; i++)
    {
        string nombre;
        cin>>nombre;

        nombres.push_back(nombre);
    }

    for(int i = 0; i < nombres.size(); i++)
    {
        if (nombres[i].size() > 10)
        {
            cout<<nombres[i][0]<<nombres[i].size() - 2<<nombres[i].back()<<"\n";
        }
        else
        {
            cout<<nombres[i]<<"\n";
        }
    }

    return  0;
}
