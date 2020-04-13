#include <stdio.h>
#include <stdlib.h>

int main()
{
int temp;
    int num, *arr, i , tm;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }
    int greatest=0;
    int p1 , p2;
    p1=0;

    /* Write the logic to reverse the array. */
   // printf("\n Hello : %d ", *(arr + i));

    for (i=0;i<num;i++){

            for (int j = i;j<num;j++){

                if(arr[j] > greatest){
                    greatest = arr[j];
                    p1 = j;
            }
            tm = arr[i];
            arr[i] = greatest;
            arr[p1] = tm;
            greatest = 0;

            p1=0;


            }



    }

    for(i = 0; i < num; i++)
        printf("%d ", *(arr + i));
    return 0;
}
