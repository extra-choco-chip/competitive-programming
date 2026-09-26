#include <iostream>

using namespace std;
using ll = long long;

int main(){
    ll N=0, T=0, tem=0, j=0, i=0, p=0;

    cin >> N >> T;
    ll arr[100000]={0};

    for(p=0; p<N; p++){
        cin >> arr[p];
    }
    
    for(i=0; i<N-1; i++){
        for(j=i+1; j<N+1; j++){
            if(arr[j]<arr[i]+100){
                continue;
            }
            else{
                tem+=arr[j]-(arr[i]+100);
                i=j;
            }
        }
    }

    if(N==0){
        tem=T;
    }

    if((arr[i]+100)<T){
        tem+=T-(arr[i]+100);
    }
    
    tem+=arr[0];

    cout << tem;
    return 0;
}