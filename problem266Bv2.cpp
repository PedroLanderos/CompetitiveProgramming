#include<iostream>
#include<vector>

using namespace std;

int main(int argc, char const *argv[])
{
    int n, t, i;
    string cola;
    cin>>n>>t>>cola;

    while (t){
        for (i = 0; i < n; i++){
            if(cola[i] == 'B' && cola[i + 1] == 'G'){
                cola[i] = 'G';
                cola[i + 1] = 'B';
                i++;
            }   
        }
        t--;
    }
	
	cout<<cola;


    return 0;
}
