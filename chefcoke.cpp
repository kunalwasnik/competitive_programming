#include <bits/stdc++.h>

using namespace std;

int main(){
int tc;
long long n, m , k , l ,r ,i ,p[100] , t[100] ,mc ,j ,answer=0,cost=-1 ,flag=0;
cin>>tc;
while(tc--){

    cin>>n>>m>>k>>l>>r;

    for(i=0;i<n;i++){
        cin>>t[i]>>p[i];

    }
    mc = m;


    for(i=0;i<n;i++){

        for(j=1;j<=mc;j++){

               if(t[i]>k+1){
                    //mc--;
                    t[i]= t[i]- 1;
               }else if(t[i] < k-1){
                     t[i]= t[i]+ 1;
               }else if(t[i] >= k-1 && t[i] <=k+1){
                    t[i] = k;

               }
        }
          //cout<<t[i]<<endl<<p[i]<<endl;

        if(t[i] >=l && t[i] <=r){

        if(flag==0){
         cost = p[i];
         flag=1;
         }


             if(p[i] < cost && flag==1)
            cost = p[i];

           }


    }

    cout<<cost<<endl;
    cost=-1;
    flag=0;



}

}


