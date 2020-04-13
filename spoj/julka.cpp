#include <iostream>
#include <string.h>
using namespace std;
int main(){
int tc;
char n[101] ,fin[101];
int len,i,temp,j,last,ne;
tc=10;

while(tc--){
cin>>n;
len = strlen(n);
i=0;
j=0;
temp=n[i] - '0';
if(len==1){
 fin[j] = temp/2 + '0';
    temp = temp%2;
    j++;

}else{

while(1){
if(n==0){
break;
}

if(i==(len-1))
break;
while(temp<2 && i!=len-1){

        temp = temp*10 + (n[++i]-'0');
        if(temp==0 && i!=len-1){
             fin[j] = temp/2 + '0';
             j++;

             continue;
        }

       // cout<<temp<<endl;

    }

    fin[j] = temp/2 + '0';
    temp = temp%2;
    j++;


}
}
//printing
j = j-1;

for(int k=0;k<=j;k++){
cout<<fin[k];
}
cout<<endl;

last = j;
temp=fin[j]-'0';
//cout<<temp<<endl;
    if(temp<1){

            while(1){
                if( (fin[j-1]-'0')==0){
                     fin[j-1] = 9 +'0';
                    j--;

                }else{
                    fin[j-1] = ((fin[j-1] - '0') -1 ) + '0';
                    //cout<<fin[j-2];
                    temp = 10;
                    break;
                }
            }


    }

        temp--;

        fin[last] = temp +'0';
       // cout<<fin[last]<<endl;



j = last;
for(int k=0;k<=j;k++){

cout<<fin[k];
}
// adding 2
cout<<endl;
temp=0;
j=last;
 /*if(fin[j]-'0'<8){
    fin[j] = (( fin[j] -'0' )+2) +'0';
}else{
    temp = 1;
   while(temp==1&&j!=-1){
        fin[j] = (( fin[j] -'0' )+0) +'0';


        cout<<fin[j]<<endl;
        j--;
        if(fin[j]<9){
               fin[j] = (( fin[j] -'0' )+1) +'0';
               temp=0;
        }else
        temp=1;
   }
   if(j==-1)
   ne=1;

}
if(ne!=0)
cout<<ne;
j = last;
for(int k=0;k<=j;k++){

cout<<fin[k];
}
*/

}

}


