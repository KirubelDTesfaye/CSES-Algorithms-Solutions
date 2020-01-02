#include<bits/stdc++.h>

using namespace std;


long long matrix(long long x){

    if (x > 3){
        cout<<0<<endl;
        cout<<6<<endl;
        cout<<28<<endl;
    }



    long n = x * x;
    long long m = 240;

    for(int i =0; i < 8; i++){
        int sum = arr[i] + 15;
        m -= sum;

    }

    cout<<m<<endl;



    return m;


}





int main(){

    long long x;
    cin >> x;

    matrix(x);



    return 0;
}
