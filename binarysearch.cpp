#include<bits/stdc++.h>
using namespace std;

int binarySearch(vector<int>& v, int t){
    int l=0, r=v.size()-1;

    while(l<r){
        int mid = (l+r)/2;

        if(t>v[mid]){
            l = mid+1;
        }else if(t<v[mid]){
            r=mid-1;
        }else if(t==v[mid]){
            return mid;
        }
    }

    return -1;
}

int main(){
    int n,k; cin>>n>>k;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }

    for(int i=0; i<k; i++){
        int t; cin>>t;
        int ans=binarySearch(v,t);

        if(ans==-1){
            cout<<"NO\n";
        }else{
            cout<<"YES\n";
        }
    }
}