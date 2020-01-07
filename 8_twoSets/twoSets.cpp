#include<bits/stdc++.h>


using namespace std;

void twoSets(int n){
    vector<int> arr;
    long sum = 0;

    for(int i=0; i<=n; i++){
        arr.push_back(0);
    }

    for(int i=1; i<=n; i++){
        sum+=i;
    }

    if(sum % 2 != 0){
        cout<<"NO\n";
        return;
    }
    long count = 0;
    long hold = 0;

    for(int i=n; i>=n/2; i--){
        if(count >= sum/2)
            break;
        count+=i;
        arr[i] = 1;
        hold++;
    }
    long size = sum / 2;
    long num;

    if(count > size){
        num = count-size;
        num = n - num;
        arr[n] = 0;
        arr[num] = 1;
    }

    cout<<"YES\n";
    cout<<n-hold<<"\n";

    for(int i = 1; i<=n; i++){
        if(arr[i] == 0)
            cout<<i<<" ";
    }
    cout<<"\n";


    cout<<hold<<"\n";
    for(int i = 1; i<=n; i++){
        if(arr[i] == 1)
            cout<<i<<" ";
    }

}



int main(){
    ios_base::sync_with_stdio(0);
    int n;
    cin>>n;
    twoSets(n);


}
