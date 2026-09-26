#include <bits/stdc++.h>
using namespace std;
using ll= long long;

int main(){
    int t, x, y;
    vector <int> v;

    cin >> t;
    while(t--){
        cin >> x;
        if(x==67){
            y=x;
        }
        else{
            y=x+1;
        }
        
        v.push_back(y);
    }
    for(vector<int>::iterator it=v.begin(); it!=v.end(); it++){
        cout << *(it)<< '\n';
    }
}