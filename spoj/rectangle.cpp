#include <iostream>
#include <math.h>
using namespace std;
int main(){
int s,total=0;

cin>>s;
for(int i=1;i<=s;i++){

    for(int j=1;j<=sqrt(i);j++){

        if(i%j==0){
        //cout<<i<<" "<<j<<endl;
        total++;
        }
    }

}

cout<<total;


}



