#include<stdio.h>
int main()
{
int i,a[5]={23,4,52,25,9},temp;


     for(i=0;i<5;i++)
     {
      if(a[i]>a[i+1])
      {
        temp=a[i];
        a[i]=a[i+1];
        a[i+1]=temp;
      }

     }

    for(i=0;i<4;i++)
     {
      if(a[i]>a[i+1])
     {
       temp=a[i];
       a[i]=a[i+1];
       a[i+1]=temp;
     }

     }

    for(i=0;i<5;i++)
  {
    printf("%d\t",a[i]);
  }
return 0;
}
