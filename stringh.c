#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char *s;
    char ch;
    int i;
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);
    //Write your logic to print the tokens of the sentence here.

    for(i=0;i<strlen(s);i++){

        ch = s[i];
        if (ch == ' '){
        printf("\n");
        continue;
        }
        putchar(ch);
    }

    return 0;
}
