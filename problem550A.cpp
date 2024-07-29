#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main(int argc, char const *argv[])
{
    string s;
    cin>>s;
    bool res=0;

    if(s.find("AB")==string::npos || s.find("BA")==string::npos)
    {
        cout<<"NO"<<endl;
        return 0;
    }

    if((s.find("AB")+1)<s.rfind("BA"))
        res=true;

    if((s.find("BA")+1)<s.rfind("AB"))
        res=true;

    if(res)
        cout<<"YES"<<endl;  
    else
        cout<<"NO"<<endl;
    
    return 0;
}