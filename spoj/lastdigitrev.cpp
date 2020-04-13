#include <iostream>
#include <string.h>
using namespace std;
long long int mod(long long int a , long long int b , long long int c);
int main(){
long long int tc,m,a,b;
string s;

cin>>tc;

while(tc--){
cin>>s>>b;

a= (s[(s.length()-1)] - '0');

m = mod(a,b,10);
cout<<m<<endl;

}


}

long long int mod(long long int a , long long int b , long long int c){
long long int m;
    if(b==0)
    return 1;

   if(b%2==0){
    m = mod(a,b/2,10);
    return (m*m%10);
   }else{
        return  ( a%10 * mod(a,b-1,c)%10);
   }


}


