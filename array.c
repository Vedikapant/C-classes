                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    #include<stdio.h>
int main()
{
int i,a[10]={2,3,6,7,8,9,63,69,72,87},temp,j,p;

for(j=0;j<9;j++)
{
     for(i=j;i<10;i++)
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

   for(i=0;i<10;i++)
  {
    printf("%d\t",a[i]);
  }

 int flag = 0;
  printf("\nenter the value of p:");
  scanf("%d",&p);
 for(i=0;i<10;i++){
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


int s,low=0, high=9;
int mid=(low+high)/2;

printf("\n Enter the search element:");
scanf("%d",&s);

if(s<a[mid]) 
            {
              printf("the num is in right side \n");
            }

else if(s>a[mid])
            {
              printf("the num is in left side \n"); 
            }

else        {
                printf("the num is in mid \n");
             }


return 0;
}
