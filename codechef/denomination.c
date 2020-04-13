#include <stdio.h>

int main(){

int tc,notes=0,money,current ,i,sum;
int den[6] = {1,2,5,10,50,100};
scanf("%d" , &tc);

while(tc!=0){
   scanf("%d" , &money);

   for(i=5;i>=0;i--){

   	if(money!=0){
		sum = money/den[i];
		notes=notes + sum;
        	money =money%den[i];

	}


   }

printf("%d\n" , notes);
notes=0;

tc--;
}



}
