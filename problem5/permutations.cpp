#include<bits/stdc++.h>

using namespace std;

vector<int> permutations(vector<int> arr,int n){
    int i = 1;
    bool check = false;
    bool check2 = true;
	int j = 0;
    while(check2){
	if(check == false && i == n){
		check2 = false;
		continue;
	}else if (i == n && check == true){
		i = 1;
		check = false;
		continue;
	}else if(abs(arr[i]-arr[i-1]) == 1 && i != n-1){
		if(abs(arr[i+1] - arr[i-1]) != 1)
			swap(arr[i], arr[i+1]);
		else if(i != 1){
			swap(arr[i-2], arr[i-1]);
		}
		if(arr[i] == 2 && arr[i-1] == 3)
			break;

		check = true;
	}else if (i == n-1 && abs(arr[i]-arr[i-1]) == 1){
		swap(arr[i], arr[j++]);
		check = true;
	}
	i++;
     }

    return arr;
}






int main(){
    int n;
    cin>>n;

    vector<int> arr;
	if (n == 3 || n == 2){
		cout<<"NO SOLUTION"<<endl; return 0;
	}

	int x = 1;
    while(x <= n){
        arr.push_back(x);
		x++;
    }


    vector<int> newArr;
    newArr = permutations(arr,n);

	cout<<endl;
    for (int i =0; i < n; i++){
        cout<<newArr[i]<<" ";
    }
	cout<<endl;


    return 0;
}
