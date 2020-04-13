#include <stdio.h>

int main()
{
 int n=4;
 int num , mod,s[4];
 scanf("%d" , &num);
  while(n!=0){

        mod=num%10;
        s[n-1] = mod;
        num = num/10;

        n--;
    }
    printf("%d\n" , s[0]);
    printf("%d\n" , s[1]);
    printf("%d\n" , s[2]);
    printf("%d\n" , s[3]);
}
