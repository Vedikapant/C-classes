#include<stdio.h>
int main()
{
int i,a[10];

     for(i=0;i<10;i++)
     {
	printf("enter %d th element", i);
        scanf("%d ",&a[i]);
     }

     for(i=0;i<10;i++)
     {
	printf("%d\t",a[i]);
     }

return 0;
}
