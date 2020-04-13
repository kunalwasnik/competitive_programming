#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char ch;
    char line[30];
    char sen[50];
    scanf("%c" ,&ch);
    scanf("%s" , line);

    scanf("\n");
    scanf("%[^\n]%*c" , sen);

    printf("%c\n",ch);
    printf("%s\n",line);
    printf("%s" ,sen);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
