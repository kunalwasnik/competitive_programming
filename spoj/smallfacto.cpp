#include <iostream>
using namespace std;

int multiply(int cnum , int n[200] ,int m);

int main(){
int tc , n,num[200] , digit=1;
num[0]=1;
cin>>tc;

while(tc--){
cin>>n;

for(int i=2;i<=n;i++){
    digit = multiply(i,num,digit);

}

for(int i=digit-1;i>=0;i--){
   cout<<num[i];
}
cout<<endl;
num[0]=1;
digit=1;
}


}

int multiply(int cnum , int n[200] ,int m){

int carry=0,x;

for(int i=0;i<m;i++){
        x = cnum *n[i] + carry;
        n[i] = x%10;
        carry = x/10;


}
    while(carry){
        n[m] = carry%10;
        carry = carry/10;
        m++;

    }
    return m;


}


