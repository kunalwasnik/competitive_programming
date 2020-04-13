#include <bits/stdc++.h>

using namespace std;
long long dp[1000000]={0};


long long  byte(long long  a){

long long   x;
if(a==0){
return 0;
}

if(a>0 && a<1000000 && dp[a]==0 ){
x = max(a , (byte(a/2)+byte(a/3)+byte(a/4)));
    dp[a] = x;
}
else if (a>=1000000){
x = max(a , (byte(a/2)+byte(a/3)+byte(a/4)));

}
else{
return dp[a];
}

return x;
}
int main(){
long long  a ,n;


    while(cin>>a)
    {

        n=byte(a);
        cout<<n<<endl;

    }
return 0;
}





