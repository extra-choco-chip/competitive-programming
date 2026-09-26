#include <bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
    ll n, q, k, ai, bi, min;

    cin >> n >> q;
    vector<ll> minv;
    ll va[n]={};
    for(ll i=0; i<n; i++){
        cin >> ai;
        va[i]=ai;
    }
    for(ll i=0; i<q; i++){
        cin >> k;
        ll vb[k]={};
        ll varemoved[k]={};
        for(ll i=0; i<k; i++){
            cin >> bi;
            //vb[i]=bi;
            varemoved[i]=va[bi-1];
            va[bi-1]=0;
        }
        for(ll i=0; i<n; i++){
            if(va[i]>0){
                min=va[i];
                break;
            }
        }
        for(ll i=0; i<n; i++){
            if(va[i]<min){
                min=va[i];
            }
        }
        minv.push_back(min);
        for(ll i=0; i<k; i++){
            ll j=vb[i];
            va[j-1]=varemoved[i];
        }
    }
    
    for(vector<ll>::iterator it=minv.begin(); it!=minv.end(); it++){
        cout << *(it)<< '\n';
    }
}