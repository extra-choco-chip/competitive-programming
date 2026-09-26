#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ll t, x, digit, dy, l, r, m, y;
    vector <ll> v;

    cin >> t;
    while(t--){
        cin >> x;
        l=x+1;
        r=1000000000;

        while(r>l){
            m=(l+r)/2;
            y=m;
            dy=0;

            while(y!=0){
                digit=y%10;
                y=y/10;
                dy=dy+digit;
            }

            if((m-dy)>x){
                r=m-1;
            }
            else if((m-dy)<x){
                l=m+1;
            }
            else{
                l=m-1;
                ll numL=l;
                r=m+1;
                ll numR=r;
                while(r>l){
                    dy=0;
                    while(numL!=0){
                        digit=numL%10;
                        numL=numL/10;
                        dy=dy+digit;
                    }
                    if((l-dy)>x){
                        l--;
                    }
                    else{
                        l++;
                        break;
                    }
                    dy=0;
                    while(numR!=0){
                        digit=numR%10;
                        numR=numR/10;
                        dy=dy+digit;
                    }
                    if((r-dy)>x){
                        r++;
                    }
                    else{
                        r--;
                        break;
                    }
                }
                
            }

        }
        v.push_back(r-l+1);
    }

    for(vector<ll>::iterator it=v.begin(); it!=v.end(); it++){
        cout << *(it)<< '\n';
    }
}