#include <iostream>
using namespace std;
int main(){
int tc, prime[1000000001] , n , m;
long long int num=1000000000;
cin>>tc;
while(tc--){
cin>>n;
cin>>m;
    for(int i=0;i<=num;i++){
        prime[i]=1;
    }
    prime[0]=0;
    prime[1]=0;

     for(int i=2;i<=num;i++){
            if(prime[i]==1){

                for(int j=2;i*j<=n;j++){
                    prime[j*i]=0;
                }


            }

    }

    for(int i=0;i<=num;i++){
        if(prime[i]==1)
        cout<<i;
    }
}


return 0;
}
