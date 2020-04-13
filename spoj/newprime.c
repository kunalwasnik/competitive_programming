#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
unsigned long long int i , j , primes[32000] , n1 , n2 , tc;

scanf("%llu" , &tc);

primes[0] = 0;
primes[1] =0;


while(tc!=0){

scanf("%llu", &n1);
scanf("%llu", &n2);


for(i=2;i<=n2;i++)
primes[i] = 1;


for(i=2;i<=(sqrt(n2));i++){

	if(primes[i] == 1)
	{
		
	for(j=2;j*i<=n2;j++){
			primes[i*j] = 0;	
		}	
	}
}

for(i=2;i<=n2;i++){

	if(primes[i] == 1 && i>=n1 && i<=n2)
	printf("%llu\n" , i);
	
}

tc--;

}

}
