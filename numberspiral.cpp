#include <bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
    ll t, y, x, n=0, maxNum=0;

    cin >> t;
    vector<ll>v;
    for(ll i=0; i<t; i++){
            cin >> y >> x;

            n=max(y, x);
            maxNum=n*n;

            if(n%2==0){
                if(y>x){
                    v.push_back(maxNum-x+1);
                }
                else{
                    v.push_back(maxNum-((n*2)-1)+y);
                }
            }
            else{
                if(y<x){
                    v.push_back(maxNum-y+1);
                }
                else{
                    v.push_back(maxNum-((n*2)-1)+x);
                }
            }
    }
    
    for(vector<ll>::iterator it=v.begin(); it!=v.end(); it++){
        cout << *(it)<< '\n';
    }
    
}