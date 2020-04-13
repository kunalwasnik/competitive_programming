#include <stdio.h>
int main(){
int test;
int n1[10000] , n2[10000], result;
int i;
scanf("%d" , &test);

for (i =0;i<test;i++){

    scanf("%d" , &n1[i]);
    scanf("%d" , &n2[i]);


}

for (i =0;i<test;i++){

   result = n1[i] + n2[i];
   printf("%d\n" , result);

}



}
