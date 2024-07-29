#include<vector>
#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int coordinate, answer = 0;
    cin>>coordinate;

    answer = coordinate / 5;

    if(coordinate % 5 != 0)
        answer+=1;
    
    cout<<answer;

    return 0;
}
