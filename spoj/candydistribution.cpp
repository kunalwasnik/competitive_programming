#include <iostream>
using namespace std;
int main(){
int tc;
long long int n,total,c;
cin>>tc;

while(tc--){
total=0;
cin>>n;

for(int i=0;i<n;i++){
    cin>>c;
    total = total+ c%n;
    //cout<<total<<endl;

}
//cout<<total<<endl<<n<<endl;
if(total%n==0)
cout<<"YES"<<endl;
else
cout<<"NO"<<endl;


}


}


