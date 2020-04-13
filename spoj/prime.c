#include <stdio.h>

int main(){
int tc, m , n,i,num,j,res=0;

scanf("%d" , &tc);

while(tc--){
scanf("%d" , &n);
scanf("%d" , &m);

for(i=n;i<=m;i++){
        for(j=1;j<=i;j++){

                if(i%j==0)
                {
                    res++;

                }




        }
        if(res==2)
        printf("%d\n" ,i);
        res=0;
}



}


}
