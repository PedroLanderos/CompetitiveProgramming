#include<iostream>
#include<vector>
#include<set>

using namespace std;

int main(int argc, char const *argv[])
{
    int n, x, result, j = 0;

    cin>>n>>x;
    vector<int>numbers(n);

    for (int i = 0; i < n; i++)
        cin>>numbers[i];

    set<int> numbers2;

    for (int i = 0; i < x; i++)
    {
        while(j < n)
        {
            if(numbers[j] % i == 0)//es multiplo
                numbers2.insert(numbers[i]);
            j++;
        }   
        
    }

    result = numbers2.size(); //para el primer caso, output deberia ser 7

    cout<<result<<endl;
    
    

    return 0;
}
