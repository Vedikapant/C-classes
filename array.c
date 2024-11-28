#include<stdio.h>
int main()
{
int i,a[5]={37,32,9,51,7},temp;


     for(i=0;i<5;i++)
     {
      if(a[0]>a[i+1])
      {
        temp=a[0];
        a[0]=a[i+1];
        a[i+1]=temp;
      }

     }

    for(i=0;i<4;i++)
     {
      if(a[0]>a[i+1])
     {
       temp=a[i];
       a[0]=a[i+1];
       a[i+1]=temp;
     }

     }

    for(i=0;i<5;i++)
  {
    printf("%d\t",a[i]);
  }
return 0;
}
