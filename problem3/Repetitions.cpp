#include<bits/stdc++.h>

using namespace std;

void soln(string s){
    long count = 1;
    int i = 0;
    long max = 0;
    while(1){
           if(s[i] == s[i+1])
            count++;
        else
            count = 1;

        if(count > max)
            max = count;

        if(i == s.length()-1)
            break;

        i++;

    }
    cout<<max<<endl;
}

int main(){
    string hold;
    cin>>hold;
    soln(hold);
    return 0;
}
