#include <iostream>

using namespace std;
using ll= long long;

int main(){
    ll n;

    cin >> n;

    if(n>3 && n%2==0){
        for(ll i=2; i<n+1; i+=2){
            cout << i << " ";
        }
        for(ll i=1; i<n; i+=2){
            cout << i << " ";
        }
    }
    else if(n>3 && n%2!=0){
        for(ll i=1; i<n+1; i+=2){
            cout << i << " ";
        }
        for(ll i=2; i<n; i+=2){
            cout << i << " ";
        }
    }
    else if(n==1){
        cout << "1";
    }
    else{
        cout << "NO SOLUTION";
    }

}