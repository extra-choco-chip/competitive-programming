#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    int t, n, b;

    cin >> t;
    while(t--){
        cin >> n;
        int m=n;
        vector <ll> vecb={};
        int flag=0;
        while(m--){
            cin >> b;
            vecb.push_back(b);
        }
        sort(vecb.begin(), vecb.end());
        for(int i=n-1; i>=2; i--){
            ll x = vecb[i];
            ll y = vecb[i-1];
            if(vecb[i-2]==(x%y)){
                continue;
            }
            else{
                cout << "-1\n";
                flag=1;
                break;
            }
        }
        if(flag==0){
            cout << vecb[n-1] << " " << vecb[n-2] << "\n";
        }
    }
}