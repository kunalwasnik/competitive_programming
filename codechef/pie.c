#include <stdio.h>

int main(){

int tc , n ,max=1 ,i;

scanf("%d" , &tc);
while(tc!=0){

int  in[1000]  ,j, c=1 , num[1000]={0} , k=0;

scanf("%d" , &n);

    for(i=0;i<n;i++){
    scanf("%d" , &in[i]);
    }

    for(i=1;i<=1000;i++){

            for(j=0;j<n;j++){

                if(in[j]%i==0){

                    //printf("%d \n" , i);
                    if(j==n-1){
                        num[k] = i;
                        k++;

                    }

                }else{
                break;}
            }


    }
max =1;
    for(i=0;i<k;i++){

        if(num[i] > max){
        max = num[i];
        //printf("%d" , max);
        }

    }



 for(i=0;i<n;i++){
    printf("%d " , (in[i]/max)) ;
    }
    printf("\n");

tc--;
}





return 0;


}


