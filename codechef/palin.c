#include <string.h>
#include <stdlib.h>
int main(){
    long long int s[100000] , num ,last = 0;
    long long int n , k , i , temp=0, swap=0;
    long long int rem=0  , mod=0 , z=0 , u=0;
   long long int changes, can=1;

    // k = swaps , n = number
    scanf("%ld" , &n);
    scanf("%ld" , &k);
    scanf("%ld" , &num);

    if(n==1 && k==1){
    printf("9");
    exit(0);
    }else if(n==1 && k==0)
    {
    printf("-1");
    exit (0);
    }

    u =k;
    z = n;
    while(n!=0){

        mod=num%10;
        s[n-1] = mod;
        num = num/10;

        n--;
    }
   n =z;
    //check for palindrome

    if(n%2==0){

    for(i=0;i<n;i++){

        if(s[i]!=s[(n-i-1)]){
        //printf("%ld b %ld \n" , s[i] , s[(n -i -1)]);
            swap++;
        }
         if(i==(n/2)-1){

        break;
}

    }
    changes = 0;

   // printf("%ld \n" , swap);
    if(swap>k){
        printf("-1");

        exit(0);
    }else {



    last = n-1;
    for(i=0;i<n;i++){
        //change
               if(i==(last-i))
        break;

        if(s[i]!=s[(last-i)]){

            if(s[i] > s[last-i]){
                s[last-i] = s[i];


            }else if(s[i] < s[last-i]){
                s[i] = s[last-i];
           }

            k = k-1;
 //printf("%ld \n" , k);
        }

        }



}



 //printf("%ld \n" , change);
        i=0;
if(u!=0)
{
        for(i=0;i<n;i++)
        {
      //  printf("inside");
             if(u!=1 && s[i] !=9 ){

            s[i] = 9;
            s[(last-i)] = 9;
            u = u-2;

                }
                if(u<=0)
                break;

                if(i==n+1/2)
                break;

        }
}



         for(i =0;i<n;i++)
        printf("%ld" ,s[i]);
















}else
{


for(i=0;i<n;i++){

        if(s[i]!=s[(n-i-1)]){
        //printf("%ld b %ld \n" , s[i] , s[(n -i -1)]);
            swap++;
        }
         if(i== (((n-1)/2)-1)  ){

        break;
}

    }

    changes = 0;

   // printf("%ld \n" , swap);
    if(swap>k){
        printf("-1");

        exit(0);
    }else {



    last = n-1;
    for(i=0;i<n;i++){
        //change
               if(i==(last-i))
        break;

        if(s[i]!=s[(last-i)]){

            if(s[i] > s[last-i]){
                s[last-i] = s[i];


            }else if(s[i] < s[last-i]){
                s[i] = s[last-i];
           }

            k = k-1;

            if(i== (((n-1)/2)-1)  ){

        break;
        }
 //printf("%ld \n" , k);
        }

        }



}



 //printf("%ld \n" , change);
        i=0;
if(u!=0)
{
        for(i=0;i<n;i++)
        {
      //  printf("inside");
             if(u!=1 && s[i] !=9 ){

            s[i] = 9;
            s[(last-i)] = 9;
            u = u-2;

                }
                if(u<=0)
                break;



                if(i== (((n-1)/2)-1)  ){

                break;}

        }
}
if(u>=1 && k!=0)
s[( (n+1) /2 -1 )] = 9;




         for(i =0;i<n;i++)
        printf("%ld" ,s[i]);


//-------------------------- FOR ODD ----------------








}

}

