#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    string s;
    int t, n, i, flag;

    cin >> t;

    while(t--){
        cin >> n;
        cin >> s;
        
        flag=0;
        for(i=0; i<(s.size()-1); i++){
            if(s[i+1]!=s[i]){
                flag++;
            }
        }

        if(flag==0 || flag>=2){
            cout << 1 << "\n";
        }
        else{
            cout << 2 << "\n";
        }
    }
}