#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    ll t, n, num, min, max, k, m;

    cin >> t;
    while(t--){
        vector <ll> h={};
        cin >> n;
        m=n;
        while(n--){
            cin >> num;
            h.push_back(num);
        }

        min=h[0];
        max=h[0];
        for(int i=1; i<m; i++){
            if(h[i]>max){
                max=h[i];
            }
            else if(h[i]<min){
                min=h[i];
            }
        }

        k=max-min+1;
        cout << k << "\n";
    }
}