#include <bits/stdc++.h>

using namespace std;

int main(){

long long dp[10000] , tc , i , n , m[10000] , answer,c;
cin>>tc;

for(c=1;c<=tc;c++){
cin>>n;

for(i=0;i<n;i++){
    cin>>m[i];
}

if(n==1){
   answer = m[0];
}else if(n==2){
    answer = max(m[0] , m[1]);
}else{

    dp[0] = m[0];
    dp[1] = max(m[0] , m[1]);

    for(i=2;i<n;i++){
        dp[i] = max((m[i] + dp[i-2]) , dp[i-1]);
}
    answer = dp[n-1];

}

printf("Case %lld: %lld\n" ,c , answer );

}


}

