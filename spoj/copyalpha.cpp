#include <iostream>
#include <string.h>

using namespace std;

int main(){
char s[500000];
int len , q,i,j;
char store;
int p,counter;
cin>>len;
cin>>s;
cin>>q;

for(i=1;i<=q;i++){
    cin>>p;
   store = s[p-1];
   // cout<<store<<endl;

    for(int j=0;j<p-1;j++){
        if(s[j] == store){
            counter++;
        }

    }
    cout<<counter<<endl;
    counter=0;


}



}

