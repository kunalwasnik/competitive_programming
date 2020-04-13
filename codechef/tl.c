#include <stdio.h>

int main(){
    int t,i,n1,n2,n3,r;

    scanf("%d" ,&t);

    while(t!=0){

    scanf("%d" , &n1);
    scanf("%d" , &n2);
    scanf("%d" , &n3);

    if( (n1>n2 && n1<n3) || (n1 > n3 && n1<n2))
        r = n1;
    else if((n2>n3 && n2<n1) || (n2>n1 && n2<n3) )
    r = n2;
    else
    r = n3;

    printf("%d\n" ,r);


    t--;
    }




}
