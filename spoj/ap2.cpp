#include <iostream>

using namespace std;

int main(){
int tc;
long long int t , tl , sum,n,d,a,i;

cin>>tc;
while(tc--){
cin>>t>>tl>>sum;
n = (2*sum)/(t+tl);
cout<<n<<endl;
d = (tl - t)/(n-5);
a = t- 2*d;

for(i=0;i<n;i++){
cout<<(a+i*d)<<" ";

}
cout<<endl;

}



}
