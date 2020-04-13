#include <iostream>

using namespace std;

int main(){
int tc,f=0;
long long int ec,i,j ,a[1000000],cn , e;
cin>>tc;
while(tc--){
f=0;
cin>>ec;
for(i=0;i<ec;i++){
    cin>>a[i];

}

for(i=0;i<ec;i++){
cn =0;
        for(j=0;j<ec;j++){
            if(a[i]==a[j])
                cn++;


        }
        if(cn>ec/2){
            f=1;
            cout<<"YES "<<a[i]<<endl;
             break;
        }


}

if(f==0)
cout<<"NO"<<endl;


}



}

