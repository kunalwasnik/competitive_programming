#include <stdio.h>
#include <stdlib.h>
int main(){

    char name[20];
    char choice;

    do {

    printf("Enter your name :");
    scanf("%s" , name);

    printf("%s you are Magical :)\n" , name);
    printf("Try Again! Press y  else n :");

    scanf(" %c", &choice);


    }while(choice=='y');

}
