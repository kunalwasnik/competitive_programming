#include <stdio.h>

int main(){

int tc , j , i ,z=0 , x=0 , a=1 , run=1 ,c=0;
// x is used to keep individual track of product for each tc;
int num , k , n[10001] , cross, answer=0,value;
scanf("%d" , &tc);

while(tc!=0){
scanf("%d" , &num);
scanf("%d" , &k);

if(k>num){
answer = -1;
}
else {

//n[10000] = {1};
n[z] =  num -k +1;

    for(i=1;i<k;i++){

    n[i]=1;
	}
		while(1)
		{
                cross = 1;

                if(n[z-1]!=0 && cross!=0 )
                cross = cross* (n[z]*((n[z]-1)));


                z++;
                // printf("%lld %lld %lld %lld \n "  ,n[0],n[1],n[2] );

				while(1){
						/* if(run==1){
							n[z] = 1;


						} */

                      // printf(" \n \n %lld *  %lld * %lld \n \n ",n[0],n[1] , n[2] );
                      if(n[z-1]!=0 && cross!=0 )
						cross = cross* (n[z] *(n[z]-1));
                        //printf(" \n \n Later : %lld "  ,cross[x] );


						if(z == (k-1))
                    	break;

						 z++;
					}
					//printf("  \n \n CROSS : %lld \n \n " , cross[x]);

					if(answer < cross){
						answer = cross;
					}

					value = n[0];
					x++;
					run++;
					z=0;


					n[z]--;


					if(n[k-1] == n[1] )
					{
						a=1;}
						else
                        a++;

                    n[a]++;



                    //printf("%d" ,z);

					//for(i=0;i<(value-n[z-1]);i++){







					//}
                    c++;
                    if(n[0] <= n[1])
                    break;


		}
		}


printf("%d\n" , answer%1000000000+7);

answer = 0;
tc--;
}





}
