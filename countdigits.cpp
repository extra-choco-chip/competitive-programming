#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, digit=0;
    cin >> n;
    while(n>0){
        n=n/10;
        digit++;
    }
    cout << digit;
}

/*
int digit = (int)(log10(n) + 1);
*/