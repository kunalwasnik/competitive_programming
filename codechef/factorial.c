#include <stdio.h>

int main(){

	int tc;
	int i,j;
	int result[200] = {1}, a[100];
	scanf("%d" , &tc);

	for(i=0;i<tc;i++){
		scanf("%d" , &a[i]);

	}

	for(i=0;i<tc;i++){
		for(j=1;j<=a[i];j++){
		     result = result * j;

		}

        printf("%llu \n" , result);
	result = 1;
	}

}
