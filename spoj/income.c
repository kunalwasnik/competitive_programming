#include <stdio.h>

int main(){

int slab1 , slab2 , slab3;
int ts1 , ts2 , ts3;
int rebate;
int user , salary,t0 , t1 , t2 ,t3;;

scanf("%d" ,&slab1);
scanf("%d" ,&slab2);
scanf("%d" ,&slab3);
scanf("%d" ,&ts1);
scanf("%d" ,&ts2);
scanf("%d" ,&ts3);
scanf("%d" ,&rebate);
t1 = (slab2-slab1)*(ts1/100);
t2 = (slab3-slab2)*(ts2/100);


for(i=0;i<4;i++){
scanf("%d" ,&user);

if(user <= t1){
salary = salary + (user*100)/ts1;
}else if(user<=t2){
salary = salary + (user*100)/ts2;
}else{
salary = salary + (user*100)/ts3;

}



}

printf("%d" , salary);

}
