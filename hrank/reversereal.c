    #include <stdio.h>
    #include <stdlib.h>

    int main()
    {
        int num, *arr, i;

        scanf("%d", &num);
        arr = (int*) malloc(num * sizeof(int));
        int fin[num];


        for(i = 0; i < num; i++) {
            scanf("%d", arr + i);

        }

        int end = num-1;

        for(i = 0; i < num; i++) {
            fin[i] = arr[end];
            end --;
        }




        /* Write the logic to reverse the array. */

        for(i = 0; i < num; i++)
            printf("%d ", fin[i]);
        return 0;
    }
