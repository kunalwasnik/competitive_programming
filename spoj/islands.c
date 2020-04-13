#include <stdio.h>
#include <math.h>


int main(){
int n,x1[100000],x2[100000],y1[100000] , y2[100000],  wx1 , wy1,pos[100000];
float d[100000],dis1 ,dis2;

scanf("%d" , &n);
for(int i=0;i<n;i++){
scanf("%d" , &x1[i]);
scanf("%d" , &y1[i]);
scanf("%d" , &x2[i]);
scanf("%d" , &y2[i]);
}

scanf("%d" , &wx1);
scanf("%d" , &wy1);


for(int i=0;i<n;i++){
    dis1 = sqrt(( (x2[i]-wx1) * (x2[i]-wx1) ) + ( (y2[i]-wy1) * (y2[i]-wy1)));
    dis2 =sqrt(( (x1[i]-wx1) * (x1[i]-wx1) ) + ( (y1[i]-wy1) * (y1[i]-wy1)));

    if(dis1> dis2)
    d[i] = dis1;
    else
    d[i] = dis2;



}

for(int i=0;i<n;i++){
pos[i] = 1;
        for(int j=0;j<n;j++){

            if(d[i] > d[j]){
                pos[i] = pos[i] +1;
            }

    }

}

for(int i=0;i<n;i++){
//printf("%f " , d[i]);
     printf("%d " , pos[i]);

}



}

