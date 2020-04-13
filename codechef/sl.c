#include <stdio.h>

int main(){
unsigned int tc , i , result=0 , sum=0 , num[1000] , k=0;

scanf("%d", &tc) ;

for(i=0;i<tc;i++){

    scanf("%d",&num[i]);
}

for(i=0;i<tc;i++){

    while(1){


        result = num[i] %10;
        num[i] = num[i]/10;

        if(k==0)
        sum = sum+result;

        k++;

        if(num[i] == 0){
            sum = sum+result;
           break;

        }





    }

    printf("%d\n" , sum);
    sum = 0;
    k=0;

}



}

