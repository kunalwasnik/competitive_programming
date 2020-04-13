#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int i1 , i2;
    float f1 , f2;

    scanf("%d %d" , &i1 , &i2);
   // scanf("%d" , &i2);

    scanf("%f %f" , &f1 , &f2);
   // scanf("%f" , &f2);

    printf("%d" , (i1+i2));
    printf(" %d" , (i1-i2));

     printf("\n%.1f" , (f1+f2));
     printf(" %.1f" , (f1-f2));




    return 0;
}
