#include <bits/stdc++.h>
#include <string.h>
using namespace std;

int main(){
int tc;
int alen , blen,steps , ca , cb;;
string a , b;
cin>>tc;
while(tc--){
cin>>a>>b;

alen = a.length();
blen = b.length();
steps=0;
ca = alen;
cb = blen;


for(int i =0;i<ca;i++){
    for(int j = 0;j<cb;j++){
        if(a[i] == b[j] && a[i]!=0 && b[j]!=0){
            alen--;
            blen--;
           //   cout<<a[i];
            a[i] = 0;
            b[j] = 0;

        }

    }

}
//cout<<alen<<endl<<blen<<endl;
if(alen>blen)
steps = alen;
else
steps = blen;

cout<<steps<<endl;


}



}
