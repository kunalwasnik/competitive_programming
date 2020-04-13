#include <stdio.h>
int main(){

int rounds,i ,r1[10000], r2[10000] , lead[10000]= {0} , win[10000]= {0} , max ,k , p1 , p2;
scanf("%d" , &rounds);

for(i=0;i<rounds;i++){

scanf("%d" , &r1[i]);
scanf("%d" , &r2[i]);

}

p2 =0;
p1 = 0;


for(i=0;i<rounds;i++){

p1 = p1 + r1[i];
p2= p2 + r2[i];
lead[i] = p1 - p2;

    if(lead[i]<0){
        lead[i] = (-1)*lead[i];
        win[i] = 2;

        }
        else{
        win[i] = 1;


        }

}
max = lead[0];
k = 0;

for(i=0;i<rounds;i++){

    // FOR MAX LEAD
    if (max<lead[i]){

        max = lead[i];
        k = i;
        }

}

printf("%d %d" , win[k] , max);




return 0;
}
