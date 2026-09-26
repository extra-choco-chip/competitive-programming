#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    ll t, n;

    cin >> t;
    while(t--){
        cin >> n;
        if(n%12==10 && (n-22)>=0){
            cout << 22 << " " << n-22 << "\n";
        }
        else if(n%12==10 && (n-22)<0){
            cout << "-1\n";
        }
        else{
            cout << n%12 << " " << n-(n%12) << "\n";
        }
    }
}