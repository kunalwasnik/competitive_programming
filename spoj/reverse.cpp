#include <iostream>

using namespace std;
int rev(int c);
int main(){
int tc,a,b,sum;

cin>>tc;

while(tc--){
    cin>>a>>b;
    a = rev(a);
    b = rev(b);
   // b = rev(b);
    cout<<rev(a+b)<<endl;

}


}

int rev(int r){
    int temp , rem,re=0,digit=1,cp,t=0;
    cp=r;
    while(r=r/10){
        digit++;
    }

    for(int i=1;i<=digit;i++){
        rem = cp%10;
        cp = cp/10;
        if(rem==0 && t==0){
            continue;

        }else{
            t++;
        }
        re = re*10 + rem;

    }


    return re;

}
