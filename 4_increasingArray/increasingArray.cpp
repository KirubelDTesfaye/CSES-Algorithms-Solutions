#include<bits/stdc++.h>

using namespace std;


long long increasingArray(vector<long> arr, int n){
    long long count = 0;
    long long hold;
    int i = 0;
    while(i < n-1){
        if(arr[i] > arr[i+1]){
            hold = count;
            count = arr[i] - arr[i+1];
            arr[i+1] += count;
            count += hold;
        }
        i++;
    }

    return count;
}


int main(){

    int n;
    cin>>n;
    vector<long> arrMain;
    int x, i = 0;
    do{
        cin>>x;
        arrMain.push_back(x);
        i++;
    }while(i<n);


    cout<<increasingArray(arrMain, n)<<endl;



    return 0;
}
