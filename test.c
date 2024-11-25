#include<stdio.h>
int main()
{
int x,g,h,f,m,n,o,p,q,sum=0;
   printf("enter the number:");
   scanf("%d",&x);

 if (x>0)
{
   printf("the number %d is positive\n",x);
 }
 else
{
   printf("number is wrong");
}
   while( x>0)
 { p=x%10;
   q=x/10;
   x=q;
sum=sum+p;
}
printf("\n sum of num %d is",sum);
 return 0;
}





