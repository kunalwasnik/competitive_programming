#include <iostream>

using namespace std;

int main(){
long long n,f;

while(true){
cin>>n;
if(n==-1)
break;
f=0;

if((n-1)%6==0){

    for(int i=0;i<=n/6;i++){
            if(((3*i*(i+1))+1) == n)
            {
              // printf("Y\n");
               f=1;
               break;
            }
    }




}else
f=0;

if(f==0)
cout<<"N"<<endl;
else
cout<<"Y"<<endl;



}



}

