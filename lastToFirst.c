#include <stdio.h>

void end_to_front(int c[] , int n);
int main(){
int a[5] = {1 , 2 , 3 , 4 , 5};

end_to_front(a , 5);
for( int i=0;i<5;i++){
printf("%d ",a[i]);

}




}

void end_to_front(int c[], int size){

int temp,i;
temp = c[size-1];


for(i=size-1;i>0-1;i--){
c[i] = c[i-1];

}
c[0] = temp;


}
