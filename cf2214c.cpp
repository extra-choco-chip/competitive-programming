#include <bits/stdc++.h>
using namespace std;
using ll=long long;

int main(){
    int a, b, c, d;
    ll t;
    vector <ll> v;

    cin >> t;
    while(t--){
        cin >> a >> b >> c;
        if((a<=b && b<=c) || (c<=b && b<=a)){
            d=b;
        }
        else if((b<=a && a<=c) || (c<=a && a<=b)){
            d=a;
        }
        else{
            d=c;
        }
        v.push_back((a^b^c)-d);
    }
    for(vector<ll>::iterator it=v.begin(); it!=v.end(); it++){
        cout << *(it)<< '\n';
    }
}