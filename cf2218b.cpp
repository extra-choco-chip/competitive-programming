#include <bits/stdc++.h>
using namespace std;
using ll= long long;

int main(){
    int t, a, sum;
    vector <int> v;
    vector <int> maxSum;

    cin >> t;
    while(t--){
        v.clear();
        sum=0;
        for(int i=0; i<7; i++){
            cin >> a;
            v.push_back(a);
        }
        sort(v.begin(),v.end());
        sum+= v[6]-v[5]-v[4]-v[3]-v[2]-v[1]-v[0];
        maxSum.push_back(sum);
    }
    for(vector<int>::iterator it=maxSum.begin(); it!=maxSum.end(); it++){
        cout << *(it)<< '\n';
    }
}