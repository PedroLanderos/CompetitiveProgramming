#include<iostream>
#include<vector>

using namespace std;

int main(int argc, char const *argv[])
{
    int p1, p2, target;
    cin>>target;
    vector<int> numbers;
    for (int i = 0; i < numbers.size(); i++)
    {
        int aux;
        cin>>aux;
        numbers.push_back(aux);
    }

    p1 = 0;
    p2 = numbers.size() - 1;

    while(p1 < p2)
    {
        if(numbers[p1] + numbers[p2] > target)
            p2--;
        else
            p1++;
    }
    
    cout<<p1<<" "<<p2;
    

    //problema 2, buscar en un arreglo la cantidad de sub arreglos de los cuales su suma sea igual a un valor dado target
    return 0;
}
