#include <iostream>
#include <math.h>
using namespace std;

int main(){
 int tc,n,cp,t,f,rem;

cin>>tc;

while(tc--){
cin>>n;
cp =n;

    for(int i=1;;i++)
    {   rem =n/pow(5,i);
        f =  f +rem;
        if(rem==0)
        break;

    }

    for(int i=1;;i++)
    {   rem =n/pow(2,i);
        t =  t +rem;
        if(rem==0)
        break;

    }

if(t<f)
cout<<t<<endl;
else
cout<<f<<endl;
t=0;
f=0;


}


}

