#include <iostream>

using namespace std;

int main(){
long long int n , a[100000] , b[100000],i,flag;

while(true){
cin>>n;
if(n==0)
break;

flag=1;
for(i=0;i<n;i++){
    cin>>a[i];
    b[(a[i]-1)] = i+1;
}

for(i=0;i<n;i++){
    if(a[i] != b[i]){
    flag=0;

    }
   // cout<<b[i];


}

if(flag==1)
cout<<"ambiguous"<<endl;
else if(flag==0)
cout<<"not ambiguous"<<endl;

flag=1;




}



}
