#include <iostream>
using namespace std;

int main(){
int tc,a,zero=0 , t=0 , f=0,n,flag=1;

cin>>tc;

while(tc--){
cin>>n;

for(int a=1;a<=n;a++){
    while(flag!=0)
    {
        if((a%2)==0 ){
        t++;
            cout<<"j";
        a = a/2;
        //cout<<a<<t<<endl;

        }else if( (a%5)==0){
        f++;
        a = a/5;
        cout<<"s";
         //cout<<"5 "<<f<<endl;

    }else
        flag=0;

    }

flag=1;

   // cout<<cten(i)<<endl;
}




}


}

