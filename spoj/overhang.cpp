#include <iostream>

using namespace std;

int main(){
float len, sum , n ;
float i;

while(1){
sum=0;
    cin>>len;
   // cout<<len;
    if(len==0)
    break;
  i=1;
    while(true){


        sum =sum + (1/(i+1));
       //cout<<sum<<endl;
       //cout<<len<<endl;

        if(sum>=len){
           // cout<<"kunal";
        break;

        }
        i++;

    }
    cout<<i<<" card(s)"<<endl;


}



}
