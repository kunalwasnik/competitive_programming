#include <iostream>
using namespace std;

int main(){
long int tc,a,zero=0 , t=0 , f=0,n,flag=1;

cin>>tc;

while(tc--){
cin>>n;

for(long int i=1;i<=n;i++)

{
a = i;
    while(flag!=0)
    {
        if((a%2)==0 ){
        t++;

        a = a/2;
        //cout<<a<<t<<endl;

        }else if( (a%5)==0){
        f++;
        a = a/5;
        //cout<<"s";
         //cout<<"5 "<<f<<endl;

    }else
        flag=0;

    }

flag=1;

   // cout<<cten(i)<<endl;
}

if(t<f)
cout<<t<<endl;
else
cout<<f<<endl;
t=0;
f=0;

}


}
