#include<bits/stdc++.h>

using namespace std;

unsigned long long trailingZeros(unsigned long long n){

    unsigned long long k = 0;
    unsigned long long j = 5;

    while(j <= n){
        k +=  n/j;
        j *= 5;
    }

    return k;
}




int main(){

    unsigned long long x;
    cin>>x;
    cout<<trailingZeros(x)<<endl;



    return 0;
}
