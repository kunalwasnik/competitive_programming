#include <iostream>
using namespace std;
int main(){
long long int tc,ng , nm,m1=0 , m2=0 , ig , im;

cin>>tc;

while(tc--){
cin>>ig;
cin>>im;
for(int i=0;i<ig;i++){
cin>>ng;
if(ng>m1)
m1 = ng;

}




for(int i=0;i<im;i++){
cin>>nm;
if(nm>m2)
m2 = nm;

}
if(m1==0 & m2==0){
cout<<"uncertain";
}
else if(m1>m2 || m1==m2){
cout<<"Godzilla"<<endl;
}else if(m2>m1){
cout<<"MechaGodzilla"<<endl;
}
m1=0;
m2=0;

}

}


