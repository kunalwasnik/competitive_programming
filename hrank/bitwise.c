#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
  //Write your code here.
       // int num[n];
        int amax=0 , omax=0, xmax=0;
        int max=0;
        int c;
 c= 0;


          for(int i=1;i<=n;i++){

                for(int j =1;j<i;j++){
                      // printf("\n Pair : %d %d \n" , j , i);
                     // printf("\n Included : %d %d \n" , j , num[i]);
                                if( ((j&i) > amax) &&  (j & i) < k){
                                     amax = j & i;

                                            //printf("\n Current value : %d \n" , amax );
                                }


                                if((j | i) > omax &&  (j | i) < k){
                                    omax = j  |i;
                                  //  printf("\n Current value : %d \n" , omax );

                                }


                                if((j ^ i) > xmax &&  (j ^ i) < k){
                                    xmax = j ^ i;

                                }



                        }



          }

          printf("%d" , amax);
          printf("\n%d" , omax);
          printf("\n%d" , xmax);

}

int main() {
    int n, k;

    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);

    return 0;
}
