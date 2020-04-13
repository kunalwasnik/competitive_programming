#include <iostream>
using namespace std;
int mod(int a , int b , int c);
int main(){
int tc,m,a,b;

cin>>tc;

while(tc--){
cin>>a>>b;
m = mod(a,b,10);
cout<<m<<endl;

}


}

int mod(int a , int b , int c){
int m;
    if(b==0)
    return 1;

   if(b%2==0){
    m = mod(a,b/2,10);
    return (m*m%10);
   }else{
        return  ( a%10 * mod(a,b-1,c)%10);
   }


}


