#include<iostream>
#include<vector>

using namespace std;

void Solution()
{
    int n, m;
    cin>>n>>m;
    vector<int> lastPosition(2);
    
    string **tablero = new string*[n];
    for(int i = 0; i < n; i++)
        tablero[i] = new string[m];

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
            cin>>tablero[i][j];
    }

    //hacer comparacion si en la fila actual hay un 
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            if(tablero[i][j] == "*")
            {
                int aux = j;
                while(tablero[i][aux + 1] != "")
            }
        }
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cout<<tablero[i][j];
        }
        cout<<"\n";
    }
}

int main(int argc, char const *argv[])
{
    int t;
    cin>>t;

    while(t--)
    {
        Solution();
    }
    return 0;
}
