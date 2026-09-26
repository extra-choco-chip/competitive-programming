#include <bits/stdc++.h>
using namespace std;
using ll=long long;

int main(){
    ll t, x, y, a=0, b=0, c=0, d=0;
    vector <string> str;
    // d=a+2c
    cin >> t;
    
    while(t--){
        cin >> x >> y;

        while(x!=1){
            if(x%2==0){
                d++;
                x=x/2;
            }
            else if(x%3==0){
                b++;
                x=x/3;
            }
            break;
        }
        while(d>0){
            if(d%2==0){
                c++;
                d=d/2;
            }
            else{
                a=d;
                break;
            }
        }
        
        
        // the y number should be diff of 2's and 4's that is mod of a-c
        if(x==1 && abs(y)==abs(a-c)){
            str.push_back("YES");
        }
        else{
            str.push_back("NO");
        }
    }
    for(vector<string>::iterator it=str.begin(); it!=str.end(); it++){
        cout << *(it)<< '\n';
    }
}