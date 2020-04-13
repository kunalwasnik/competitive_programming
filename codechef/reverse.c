#include <stdio.h>
int main(){

    int tc,i,num[1000] , res=0 , rem ;

    scanf("%d" , &tc);

    for(i=0;i<tc;i++){

        scanf("%d" , &num[i]);

    }

    for(i=0;i<tc;i++){

            while(num[i] > 0){
                rem = num[i] %10;
                res = res * 10 + rem;
                num[i] = num[i] /10;



            }
            printf("%d\n" , res);
            res = 0;


    }





}
