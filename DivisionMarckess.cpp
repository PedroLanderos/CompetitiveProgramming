#include<iostream>
#include<vector>

using namespace std;

int main(int argc, char const *argv[])
{
    int t;
    vector<int> rating;

    cin>>t;

    for (int i = 0; i < t; i++)
    {
        int temp;
        cin>>temp;
        rating.push_back(temp);
    }

    for (int i = 0; i < t; i++)
    {
        if (rating[i] >= 1900)
            cout<<"Division 1"<<"\n";
        else if(rating[i] >= 1600 && rating[i] <= 1899)
            cout<<"Division 2"<<"\n";
        else if(rating[i] >= 1400 && rating[i] <= 1599)
            cout<<"Division 3"<<"\n";
        else if(rating[i] <= 1399)
            cout<<"Division 4"<<"\n";
    }
    
    return 0;
}
