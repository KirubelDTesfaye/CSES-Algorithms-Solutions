#include<bits/stdc++.h>
using namespace std;


void solution(int n, vector<int> num){
    int length  = n-1;
    vector<int> v;

    for(int i =0; i <= n; i++)
        v.push_back(0);

    for(int i =0; i < length; i++)
        v[num[i]]= 1;

    for(int i =1; i <= n; i++)
        if(v[i] != 1)
            cout<<i<<endl;


}



int main(){

    int x1;
    string x2;
    vector<int> nums;
    cin>>x1;
    cin.ignore(256, '\n');
    getline(cin,x2);
    int number;
    stringstream iss(x2);

    while ( iss >> number )
        nums.push_back( number );
    solution(x1, nums);

    return 0;

}
