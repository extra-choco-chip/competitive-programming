#include <bits/stdc++.h>
using namespace std;
using ll= long long;

int main(){
    ll t, n;
    vector <ll> v;

    cin >> t;
    while(t--){
        cin >> n;
        ll count=1;
        while(n--){
            v.push_back(count*2);
            count*=2;
        }
    }
    for(vector<ll>::iterator it=v.begin(); it!=v.end(); it++){
        cout << *(it)<< '\n';
    }
}