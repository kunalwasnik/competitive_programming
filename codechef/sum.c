#include <stdio.h>

int main(){

unsigned int test , i , num[1000000] , sum=0, a ,cnum;
scanf("%d" , &test);

for(i=0;i<test;i++){

scanf("%d" , &num[i]);

}


for(i=0;i<test;i++){

    while(1){
        a = num[i] %10;
        num[i] = num[i]/10;
        sum = sum + a;



        if(num[i]==0)
        break;

    }
    printf("%d\n" , sum);
    sum = 0;


}



}
