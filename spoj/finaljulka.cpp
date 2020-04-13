#include <bits/stdc++.h>
using namespace std;
string sub(string s1 , string s2);
string divide(string s1 , int d);
string add(string s1 , string s2);
int main(){
int tc;
string n ,ans, m , k,nat;
int n1 , n2;
 tc=10;

while(tc--){
cin>>n;
cin>>m;

//ans = sub(n,m);
//ans = divide(n,2);
//cout<<ans;

if(n=="0"&& m =="0"){
nat="0";
k="0";}
else{
nat= sub(n,m);
//cout<<nat<<endl;

nat = divide(nat,2);
//cout<<nat<<endl;

k = add(nat , m);
}
cout<<k<<endl<<nat<<endl;

//cout<<divide("0",2);
//cout<<add("967" , "69");

}
}

// performing n-m subraction
string sub(string s1 , string s2){
int n1 , n2,i,carry=0 , sub;
string str;
n1 = s1.length();
n2 = s2.length();
reverse(s1.begin(), s1.end());
reverse(s2.begin(), s2.end());

for(int i=0;i<n2;i++){

sub = ((s1[i] -'0') - (s2[i] -'0')) -carry;

    if(sub<0){
        sub = sub+10;
        carry  = 1;
    }else{
        carry=0;
    }

    str.push_back(sub + '0');

}

for(int i = n2;i<n1;i++){
 sub = (s1[i] -'0') -carry;

    if(sub<0){
    carry =1;
    sub = sub+10;

    }else{

        carry=0;
    }

      str.push_back(sub + '0');

}

reverse(str.begin(), str.end());
str.erase(0, min(str.find_first_not_of('0'), str.size()-1));
return str;



}

string divide(string s1 , int d){

string str;
int temp,i;
i=0;
temp = (s1[i] - '0');
if(temp==0)
return "0";

while(temp< d){
i++;
temp = temp*10 + (s1[i] - '0');
}

while(s1.size() > i){
str += (temp / d) + '0';
temp = (temp % d) * 10 + s1[++i] - '0';

}

   if (str.length() == 0)
        return "0";
//cout<<str;
    // else return ans
    str.erase(0, min(str.find_first_not_of('0'), str.size()-1));
    return str;


}

string add(string s1 , string s2){
string str;
int carry = 0, n1 , n2,add;
n1 = s1.length();
n2 = s2.length();

 if (n1 <n2){
        swap(s2, s1);

        }
n1 = s1.length();
n2 = s2.length();
reverse(s1.begin(), s1.end());
reverse(s2.begin(), s2.end());

for(int i=0;i<n2;i++){
    add = (s1[i] - '0') + (s2[i] - '0') + carry;

    if(add>9){
     add = add%10;
     //cout<<add<<endl;
        carry = 1;
    }else{
        carry = 0;
    }
    str.push_back(add + '0');
}
//cout<<n2<<endl<<n1<<endl;
for(int i = n2;i<n1;i++){

 add = (s1[i] - '0') + carry;


 //carry = 0;
    if(add>9){
        add = add%10;
        // cout<<add<<endl;
       // cout<<add<<endl;
        carry = 1;

    }else{
        carry = 0;
    }

    str.push_back(add + '0');

}

if(carry ==1){
 str.push_back(carry + '0');
}
reverse(str.begin(), str.end());
str.erase(0, min(str.find_first_not_of('0'), str.size()-1));
return str;

}

