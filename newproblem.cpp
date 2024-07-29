#include<iostream>
#include<vector>
#include<string>

using namespace std;

void Solution()
{
    string time;
    int x;

    cin>>time>>x;

    int horas = x / 60;
    int minutos = x % 60;

    //parte para separar

    size_t  flag = time.find(":");

    if(flag != string::npos) //valor default del find
    {
        string h = time.substr(0, flag);
        string m = time.substr(flag + 1);

        int hNumero = stoi(h);
        int mNumero = stoi(m);


        mNumero += minutos;
        if(mNumero >= 60)
        {
            horas++;
            mNumero -= 60;
        }

        hNumero += horas;
        if(hNumero > 24)
        {
            horas -= 24;
        }

        
    }


}

int main(int argc, char const *argv[])
{
    int t, x;
    string time;

    cin>>t;

    while(t--)
    {
        Solution();
    }
    return 0;
}
