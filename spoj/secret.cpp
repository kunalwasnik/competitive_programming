#include <iostream>
#include <string.h>
using namespace std;
int main(){
int col,rows,total,pat,c,flag=0;
char secret[200];


while(1){
c=0;
cin>>col;
if(col==0)
break;
cin>>secret;
total = strlen(secret);
rows = total/col;
pat = col;
for(int i=0;i<col;i++){
c=i;
flag = 0;
    for(int j=0;j<rows;j++){
      cout<<secret[c];
        if(flag==0){
            c = c + 2*(col-i-1) +1;

            flag=1;
        }else{
             c = c + 2*i+1;
            flag=0;
        }



    }


}


cout<<endl;


}


}


