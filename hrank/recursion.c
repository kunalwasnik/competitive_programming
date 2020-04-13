    #include <stdio.h>
    #include <string.h>
    #include <math.h>
    #include <stdlib.h>
    //Complete the following function.

    void find_nth_term(int n, int a, int b, int c) {
      //Write your code here.



      int next;

      next = a + b+ c; // 1+ 2 +3  , 6 , 11
      n--;  // 2 , 1 , 0


      if(n==0)
      printf("%d", next);

      else
      find_nth_term( n, b , c , next);



    return 0;

    }

    int main() {
        int n, a, b, c;

        scanf("%d %d %d %d", &n, &a, &b, &c);
        if (n==1){
      printf("%d", a);
      }else if (n==2){
      printf("%d", b);
      }else if(n==3)
      printf("%d", c);
      else
        find_nth_term(n-3, a, b, c);


        return 0;
    }
