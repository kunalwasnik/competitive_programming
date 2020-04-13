#include <stdio.h>

int main(){
int tc , i , result=0 , oc=0 , num[100000];

scanf("%d", &tc) ;

for(i=0;i<tc;i++){

    scanf("%d",&num[i]);
}

for(i=0;i<tc;i++){

    while(1){

        result = num[i] %10;
        num[i] = num[i]/10;


        if(result == 4)
            oc = oc+1;

        if(num[i] == 0)
        break;




    }
    printf("%d\n" , oc);
    oc = 0;
}



}
