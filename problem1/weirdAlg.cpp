#include<bits/stdc++.h>
using namespace std;

void algo1(long long n){
    cout<<n<<" ";
    if (n == 1){
        cout<<"\n";
        return;
    }
    if(n % 2 == 0)
        algo1(n/2);
    else
        algo1((n*3)+1);
}

int main(){
    long long ill;
    cin>>ill;
    algo1(ill);


}
