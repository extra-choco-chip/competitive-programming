#include <iostream>

typedef long long ll;
using namespace std;

int main(){
    ll n, moves=0;
    ll arr[200000];

    cin >> n;
    for(ll i=0; i<n; i++){
        cin >> arr[i];
    }

    for(ll i=1; i<n; i++){
        if(arr[i]<arr[i-1]){
            moves+=arr[i-1]-arr[i];
            arr[i]=arr[i-1];
        }
    }

    cout << moves;
}