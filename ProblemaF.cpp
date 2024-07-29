#include<iostream>
#include<vector>

using namespace std;



void Solution()
{
    int n, m, i, j;
    cin>>n>>m;
    int cuadricula[n][m];

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < m; j++)
        {
            cin>>cuadricula[i][j];
        }
    }

    //imprimir matriz
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < m; ++j) {
            cout << cuadricula[i][j] << " ";
        }
        cout << std::endl;
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
