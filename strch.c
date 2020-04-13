#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n , i, sum;
    sum = 0;
    int *arr = (int*)malloc(100 * sizeof(int));

    scanf("%d" , &n);


        for(i=0;i<n;i++){
        scanf("%d" , &arr[i]);
        }





          for(i=0;i<n;i++){

            sum = sum + (arr[i]);
        }
        printf("%d" , sum);

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
