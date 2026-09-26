#include <iostream>

using namespace std;

int main(){
    int N, K,M=0, beans=0;

    cin >> N >> K;

    while(1<=N<=100000000 && 1<=K<=100000000 && beans<K){
        beans+=N;
        N+=1;
        M+=1;
    }

    cout << M-1;
    return 0;
}