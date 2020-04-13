#include <iostream>
#include <bits/stdc++.h>

using namespace std;
long long int n , m , sum=0 ,f[9];
void fib(int a);
int main(){
int tc;


cin>>tc;
while(tc--){
sum=0;
cin>>n>>m;
fib(m);

}




}

void fib(int a){
f[0] =0;
f[1] = 1;
if(n<2)
sum = 1;
for(int i=2;i<=a;i++){
f[i] = f[i-1]+ f[i-2];
if(i>=n)
sum = (sum + f[i])%1000000007;

//cout<<sum<<endl;
}

cout<<sum%1000000007<<endl;

}

