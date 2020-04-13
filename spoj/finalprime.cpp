#include <iostream>
#include <math.h>
using namespace std;

int main(){

int tc , prime=1;
long int n , m;
cin>>tc;

while(tc--){
cin>>n>>m;

for(int i=n;i<=m;i++){
//cout<<"inside i"<<endl;
	for(int j = 2;j<=(sqrt(i));j++){
	//cout<<"inside j"<<i<<endl;

			if(i%j==0){
                //cout<<"run "<<i<<j<<endl;
				prime=0;
				break;

			}

	}

	if(i!=1 && prime==1 ){
		cout<<i<<endl;
	}

prime=1;
}



}


	}
