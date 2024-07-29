#include<iostream>
#include<vector>

using namespace std;

int main(int argc, char const *argv[])
{
    int output = 0, i, j;
    int matrix[5][5];
    vector<int> position(2);

    for(i = 0; i < 5; i++)
    {
        for(j = 0; j < 5; j++)
        {
            cin>>matrix[i][j];
            if(matrix[i][j] == 1)
            {
                position[0] = i;
                position[1] = j;
            }
        }
    }
    //para conocer los valores en i
    if(position[0] > 2)
        output = position[0] - 2;
    else if(position[0] < 2)
        output = 2 - position[0];
    else if(position[0] == 2)
        output = output;
    //para conocer los valores en j
    if(position[1] > 2)
        output = (output) + position[1] - 2;
    else if(position[1] < 2)
        output = (output) + 2 - position[1];
    else if(position[1] == 2)
        output = output;

    cout<<output<<"\n";

    return 0;
}