#include <bits/stdc++.h>
using namespace std;
using ll=long long;

int main(){
    ll t, n, q, l, r, element;
    vector <ll> vout;
    
    cin >> t;

    while(t--){
        cin >> n >> q;
        vector <ll> a;
        vector <ll> b;
        for(ll i=0; i<n; i++){
            cin >> element;
            a.push_back(element);
        }
        for(ll i=0; i<n; i++){
            cin >> element;
            b.push_back(element);
        }
        for(ll i=0; i<n; i++){
            if(a[i]<b[i] && a[i]<a[i+1]){
                a[i]=max(b[i],a[i+1]);
            }
            else if(a[i]<b[i] && a[i]>a[i+1]){
                a[i]=max(a[i],b[i]);
            }
            else{
                a[i]=max(a[i],a[i+1]);
            }
            
        }

        ll prefix_sum[n]={0};
        prefix_sum[0]=a[0];

        for(ll i=1; i<n; i++){
            prefix_sum[i]=prefix_sum[i-1]+a[i];
        }
        // review from here
        while(q--){
            cin >> l >> r;
        }
    }

    for(vector<ll>::iterator it=vout.begin(); it!=vout.end(); it++){
        cout << *(it)<< '\n';
    }
}