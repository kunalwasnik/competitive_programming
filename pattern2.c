
#include <stdio.h>

int main(){

int a , b,value ,k;
 value =1;
for(a=1;a<=4;a++)
{
    for(k=a;k<=4;k++){
    printf("  ");
    }


    for(b=1;b<=a;b++){

    printf("%d  " , value);
    value++;

    }

    printf("\n");


}


}
