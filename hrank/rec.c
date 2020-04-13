#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.

int find_nth_term(int n, int a, int b, int c) {
  //Write your code here.

  int next,n1 , n2 , n3;

    n1 = a;
    n2 = b;
    n3 = c;
    next = n1 + n2 + n3;
    n3 = n2;
    n2 = n1;

    if(next == 4)
    return next + n3 + n2;
    find_nth_term(5 , next , n3 , n2);



}

int main() {
    int n, a, b, c;

    scanf("%d %d %d %d", &n, &a, &b, &c);
    int ans = find_nth_term(n, a, b, c);

    printf("%d", ans);
    return 0;
}
