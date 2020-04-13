#include <stdio.h>
#include <math.h>
int main(){
    int t,i ,n[20] , r;

    scanf("%d" ,&t);

    for(i=0;i<t;i++){
        scanf("%d" , &n[i]);

    }


    for(i=0;i<t;i++){
        r = sqrt(n[i]);
        printf("%d\n" ,r);

    }


}
