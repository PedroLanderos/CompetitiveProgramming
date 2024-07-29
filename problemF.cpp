#include <map>
#include <vector>
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    string word;
    cin >> word;
    map<char, int> cubeta;

    for (int i = 0; i < word.size(); i++)
        cubeta[word[i]]++;

    int frecuenciaImpar = 0;  
    
    for (auto it : cubeta)
    {
        if (it.second % 2 != 0)
            frecuenciaImpar++;  
    }

    if (frecuenciaImpar % 2 == 1 || frecuenciaImpar == 0) //si es un palindromo desde el prinicipio  
        cout << "First" << endl;
    else
        cout << "Second" << endl;

    return 0;
}
