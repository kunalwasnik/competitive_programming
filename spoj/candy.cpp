#include <iostream>
using namespace std;
int main(){
int p,c[10000],sum,moves,avg;

while(true){
sum=0;
moves=0;
cin>>p;

if(p==-1)
break;

for(int i=0;i<p;i++){
cin>>c[i];
sum = sum +c[i];
}

if(sum%p==0){

    avg = sum/p;
//cout<<"sum = "<<sum<<avg<<endl;
    for(int i=0;i<p;i++){

        while(true){
                if(c[i]<avg){
                    c[i]++;
                    moves++;

                }else if(c[i] > avg){
                    c[i]--;


                }else
                break;
        }

}

cout<<moves<<endl;
sum=0;
moves=0;
avg=0;




}else
cout<<"-1"<<endl;


}

}


