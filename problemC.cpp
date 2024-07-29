#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, s = 0, d = 0;
    bool flag = 0;
    cin>>n;
    vector<int> cards(n);
    for(int i = 0; i < n; i++) {
        cin>>cards[i];
    }
    int i = 0, j = n-1;
    while(i <= j) {
        if(flag == 0) {
            if(cards[i] > cards[j]) {
                s += cards[i];
                i++;
            }
            else {
                s += cards[j];
                j--;
            }
            flag = 1;
        }
        else {
            if(cards[i] > cards[j]) {
                d += cards[i];
                i++;
            }
            else {
                d += cards[j];
                j--;
            }
            flag = 0;
        }
    } 
    cout<<s<<" "<<d;
}