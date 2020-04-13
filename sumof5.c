void main()
{

int f,l;
printf("\nInput a 5 digit number");
scanf("%d",&f);
l=sum(f);
printf("\nThe sum of the digits is %d",l);
}

sum(int n)
{
if(n==0)
return 0;
else
return(n%10+sum(n/10));
}
