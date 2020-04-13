#include <iostream>

using namespace std;

int main(){

long long total,tc , n;
cin>>tc;

while(tc--){
total=0;
cin>>n;

/* for(int i=1;i<=n;i++){

    if(i==n)
    total = total%1000007 + 2*i%1000007;
    else
    total = total%1000007  + 3*i%1000007 ;
   // cout<<total<<" "<<i<<endl;
    total = total%1000007;
} */
total = n*(n+1)  +  ((n*(n-1))/2);
cout<<(total%1000007)<<endl;


}



}

