#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char ch[1000];
    char f;
    int i,j;
    int n[] = {'0','1','2','3','4','5','6','7','8','9'};
    int fn[10]={0};
    scanf("%s" , ch);


    for(i=0;i<strlen(ch);i++){

        f = ch[i];

    for (j=0;j<strlen(ch);j++){
        if(f==n[j]){
        fn[j] = fn[j] +1;

        }
    }

    }

   for (j=0;j<10;j++){


       printf("%d " , fn[j]);

        }

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}

