#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{
    int n, numberOfSolutions = 0, hasAnIdea = 0;
    vector<int> solutions(3);
    cin>>n;

    for(int i = 0; i < n; i ++)
    {
        hasAnIdea = 0;

        for(int j = 0; j < 3; j++)
        {
            int temp;
            cin>>temp;

            if (temp == 1)
                hasAnIdea++;
        }

        if (hasAnIdea >= 2)
            numberOfSolutions++;
    }

    cout<<numberOfSolutions;

    return 0;
}
