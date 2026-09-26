#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    ll t, x, y;

    cin >> t;
    while(t--){
        cin >> x >> y;
        if(x%y==0){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }
}