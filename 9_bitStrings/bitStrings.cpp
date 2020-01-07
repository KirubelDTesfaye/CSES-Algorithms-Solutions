#include<bits/stdc++.h>

using namespace std;

long long numOfBit(long long n){
    if(n <= 0)
        return 0;

    unsigned long long x = 2;
    unsigned long long y = pow(10,9) + 7;
    for(int i =0; i < n-1; i++){
        x *= 2;
        x =  x % y;
    }

    return x;
}

int main(){
    long long x;
    cin>>x;
    cout<<numOfBit(x)<<endl;

    return 0;
}
