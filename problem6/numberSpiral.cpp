#include<bits/stdc++.h>

using namespace std;


unsigned  long spiral(unsigned long y, unsigned long x){
    unsigned long n;
    unsigned long large;

   if(y > x)
       large = y;
   else
       large = x;


   if(large % 2 == 1){
       n = large * large + 1;

       if (large == x){
           return n - y;

       }else {
           n = (large-1) * (large-1);
           return n + x;
       }
   }else{
       if (large == y){
           n = large * large + 1;
           return n - x;

       }else{
           n = (large-1) * (large-1);
           return n + y;
       }

   }


    return 0;
}





int main(){

    unsigned long n;
    cin>>n;
    vector<long> arrMain;
    unsigned long x ,y;
    int i =0;

    do{
        cin>>y;
        cin>>x;
        arrMain.push_back(spiral(y,x));
        i++;
    }while(i<n);

    for(unsigned long j =0; j < n; j++)
        cout<<arrMain[j]<<endl;



    return 0;
}
