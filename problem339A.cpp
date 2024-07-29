#include <iostream>
#include <vector>
#include <cctype>
#include <algorithm>

using namespace std;

/*Identify the characters that are numbers, then put them in a vector, and sort the vector. Finally, print the vector with a + except at 
the end*/

void IdentifyNumber(string chain, vector<int>& numbers)
{
    for (int i = 0; i < chain.size(); i++)
    {
        if(isdigit(chain[i]))
        {
            int temp = chain[i] - '0';
            numbers.push_back(temp);
        }
    }

    sort(numbers.begin(), numbers.end());
    
}

int main(int argc, char const *argv[])
{
    string chain;
    vector<int> numbers;

    cin>>chain;

    IdentifyNumber(chain, numbers);

    for (int i = 0; i < numbers.size(); i++)
    {
        if(i != (numbers.size() - 1))
            cout<<numbers[i]<<"+";
        else
            cout<<numbers[i];
    }
    return 0;
}
