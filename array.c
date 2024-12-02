                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      #include<stdio.h>
int main()
{
int i,a[5]={37,32,9,51,7},temp,j,p;

for(j=0;j<4;j++)
{ 
     for(i=j;i<5;i++)
     {
      if(a[j]>a[i+1])
      {
        temp=a[j];
        a[j]=a[i+1];
        a[i+1]=temp;
      }

     }

/*
    for(j=2;j<4;j++)
     {
      if(a[2]>a[j+1])
     {
       temp=a[2];
       a[2]=a[j+1];
       a[j+1]=temp;
     }

     }

*/
   }

   for(i=0;i<5;i++)
  {
    printf("%d\t",a[i]);
  }

 int flag = 0;
  printf("\nenter the value p:");
  scanf("%d",&p);
 for(i=0;i<5;i++){
              if(p==a[i]){
                          printf("the num exits\n");
			flag = 0;
                         break;
                        }
               else {
                     flag = -1;
                    }
              } 

if(flag == -1)
{

	printf("number doesnt' exist\n");
}
return 0;
}
