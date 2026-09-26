#include <bits/stdc++.h>
using namespace std;
using ll= long long;

int main(){
    ll t, n;
    vector <ll> v;

    cin >> t;
    while(t--){
        cin >> n;
        ll arr[3*n]={0};
        ll count=1;
        for(ll i=0; i<3*n; i+=3){
            arr[i]=count;
            count++;
        }
        for(ll i=1; i<3*n; i++){
            if(arr[i]==0){
                arr[i]=count;
                count++;
            }
        }
        for(ll i=0; i<3*n; i++){
            v.push_back(arr[i]);
        }
    }
    for(vector<ll>::iterator it=v.begin(); it!=v.end(); it++){
        cout << *(it)<< '\n';
    }
}