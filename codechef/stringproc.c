#include <stdio.h>
#include <string.h>

int main(){
char s[10001];
int sum=0,len=0;
char ch;
int t,d;
scanf("%d" , &t);

while(t!=0){
scanf("%s" , s);
len = strlen(s);
for(int i=0;i<len;i++){

d = s[i] - '0';
//printf("%d" , d);
if(d<10 && d>=0){

//printf("%d",s[i]);
//printf("%d " ,s[i]);
sum = sum + d;
}


}
printf("%d\n" , sum);
len=0;
sum=0;
d=0;
t--;
}


}
