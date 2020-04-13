#include <iostream>
#include <string.h>
#include <stack>
using namespace std;
int main(){
int tc,len ,c;
char xp[400] , ch;
stack<char> s;
cin>>tc;

while(tc--){
cin>>xp;
len = strlen(xp);
for(int i=0;i<len;i++){

    ch = xp[i];

    if(ch>='a' && ch <='z')
    cout<<ch;
    else if (ch=='+' || ch=='-' ||ch=='*' ||ch=='^' ||ch=='/' ||ch=='(' ||ch==')' ){

             if(s.empty() || ch=='('){
                    s.push(ch);
                }else if(ch==')'){

                    while(s.top()!='('){

                        cout<<s.top();
                        s.pop();

                    }
                        s.pop();

              }
             else if(ch<s.top()){

                    while(s.top()>ch){
                         cout<<s.top();
                         s.pop();

                           if(s.empty()){
                            break;
                        }


                    }
                    s.push(ch);


              }


              else if(ch>s.top()){

                s.push(ch);

                }



        }
}

while(!s.empty()){
cout<<s.top();
s.pop();
}
cout<<endl;
}


}


