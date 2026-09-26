#include <bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
    vector <ll> va;
    vector <ll> minv;
    ll n, q, k, ai, bi, min;

    cin >> n >> q;
    for(ll i=0; i<n; i++){
        cin >> ai;
        va.push_back(ai);
    }
    vector <ll> va_sorted = va;
    sort(va_sorted.begin(), va_sorted.end());
    min=va_sorted[0];

    for(ll i=0; i<q; i++){
        cin >> k;
        for(ll i=0; i<k; i++){
            cin >> bi;
            ll j=0;
            if(va[bi-1]==va_sorted[j]){
                min=va_sorted[j+1];
                j++;
                break;
            }
            
        }
        minv.push_back(min);
    }

    for(vector<ll>::iterator it=minv.begin(); it!=minv.end(); it++){
        cout << *(it)<< '\n';
    }
}