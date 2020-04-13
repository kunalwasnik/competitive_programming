#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
long long int tc,i,n;
long long c;
cin>>tc;
int x;
while(tc--){
cin>>n;
c = n;


for(i=2;i<=sqrt(n);i++){

        if(n%i==0){

            while(n%i == 0)
                n = n/i;
            //cout<<i<<endl;

            //c = (1.0 - (1.0/i) ) *c;
            c=(c-c/i);
            //cout<<c<<endl;
        }




    }
    if(n!=1)
        // cout<<n<<endl;
     // c = (1.0 - (1.0/n) ) *c;
      c=(c-c/n);


cout<<c<<endl;

}




}





