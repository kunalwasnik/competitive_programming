#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

int main(){
int tc;
int n, q , p[100000],dp[100000] , pw , i ,j ,answer;
//cin>>tc;
scanf("%d" , &tc);
while(tc--){
//cin>>n>>q;
scanf("%d" , &n);
scanf("%d" , &q);

for(i=0;i<n;i++){
p[i]=0;
//cin>>p[i];
scanf("%d" , &p[i]);

}
sort(p, p+n);
answer=0;
//cout<<p[0];
for(j=0;j<q;j++){

    //cin>>pw;
    scanf("%d" , &pw);


            for(i=0;i<n;i++){

                    if(pw>p[i]){
                        answer++;
                        pw = 2*((pw-p[i]));
                        //cout<<pw<<endl;


                            }else
                            {
                               // cout<<"lower\n";
                            break;
                            }

            }

                //cout<<answer<<endl;
                printf("%d\n",answer);
                answer=0;



}


}



}



