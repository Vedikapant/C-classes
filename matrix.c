#include<stdio.h>
#include<math.h>
int main()
{
  int a[3][3]={
                 {1,2,3},
                 {4,5,6},
                 {7,8,9}
                         };
  int b[3][3]={
                 {1,2,1},
                 {3,4,0},
                 {0,1,2}
                         };
  int c[3][3]={0};

    for(int i=0;i<3;i++){
       for(int j=0;j<3;j++){
             for(int k=0;k<3;k++){
                            c[i][j]+=a[i][k]*b[k][j];
              }
      }

   }

 printf("Multiplied matrix\n");
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                printf("%d\t",c[i][j]);    
            }
            printf("\n");
        }
    



return 0;
}
