#include <bits/stdc++.h>
 
using namespace std;
using ll= long long;
 
int main(){
    int t, n, k, num;
 
    cin >> t;
    while(t--){
        cin >> n >> k;
        vector <ll> a={};
        while(n--){
            cin >> num;
            a.push_back(num);
        }
        vector <ll> a_sort = a;
        sort(a_sort.begin(), a_sort.end());
        if(a_sort==a || k>1){
            cout << "YES" <<"\n";
        }
        else{
            cout << "NO" << "\n";
        }
    }
}

