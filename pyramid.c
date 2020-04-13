#include <stdio.h>

int main(){

    int i , j;
	int c = 65;
	int min , max;
	min = 65;
	int k =1;
	int g;
	//max = 71;
//71

    for(max= 71;max>=min;max--) {

            for(j=min;j<=max;j++){

                //printf("%c " ,j);

                //printf("%c " , 178);
 printf(" " );
                if(j ==max){
            printf("*" );
            }
            }

            for (g=1;g<k;g++){

            if(k ==4){
            printf("---" , 178);
            }
            else {
            printf("   ");

            }
            }
            for(j=j-1;j>=min;j--){

               // printf("%c " ,j);
                    printf(" " );
                  if(j ==max){
                printf("*" );
            }
               //printf("%c " , 178);

            }

            k++;



            printf("\n");

	}

	}




