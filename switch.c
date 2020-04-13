#include <stdio.h>
/* A menu driven program */
main( )
{
    int k;
    while(1){

            printf("Enter choice or for exiting press 0");
            scanf("%d" , &k);
        switch(k)
            {
                case 1:
                case 2:
                case 3:
                printf("You seem to like numbers I like which is %d" ,k);
                break;

                case 0:
                exit(0);
                default:
                printf("OK.");
                break;

            }



    }
}
