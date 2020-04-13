#include<bits/stdc++.h>

using namespace std;
long long dp[1000000]={0};

long long byteland(long long n)
{
    long long a;
    if(n==0)
    {
        return 0;
    }
    if(n>0&&n<1000000&&dp[n]==0)
    {
        a=max(n,(byteland(n/2)+byteland(n/3)+byteland(n/4)));
        dp[n]=a;
    }
    else if(n>=1000000)
    {
        a=max(n,(byteland(n/2)+byteland(n/3)+byteland(n/4)));
    }
    else
    {
        return dp[n];
    }
    return a;
}

int main()
{
    long long n,ans;
    cin>>n;
    while(!cin.fail())
    {
        ans=byteland(n);
        cout<<ans<<"\n";
        cin>>n;
    }
    return 0;
}
