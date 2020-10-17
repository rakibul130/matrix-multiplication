#include<stdio.h>
int main(){
        int i,j,k,arow,acol,brow,bcol,a[10][10],b[10][10],c[10][10],sum=0;
         printf("enter the no. rows and columns of matrix a");
         scanf("%d %d",&arow,&acol);
         printf("enter the no.of rows and columns of matrix b");
         scanf("%d %d",&brow,&bcol);

         if(acol!=brow)
         printf("\n sorry.this multiplication is not possible!\n the no. of columns of matrix a and the no. of rows of matrix b should be same");


         else{
              printf("enter matrix a \n");
              for(i=0;i<arow;i++){
                  for(j=0;j<acol;j++){
                      scanf("%d",&a[i][j]);
                  }
                  printf("\n");
               }

              printf("enter matrix b \n");
              for(i=0;i<brow;i++){
                  for(j=0;j<bcol;j++){
                      scanf("%d",&b[i][j]);
                  }
                  printf("\n");
               }
             printf("the result of multiplication (a*b) is \n ");
             for(i=0;i<arow;i++){
                 for(j=0;j<bcol;j++){
                    for(k=0;k<acol;k++){

                        sum=sum+a[i][k]*b[k][j];

                        }
                      c[i][j]=sum;
                      printf("&d ",c[i][j]);
                      sum=0;
                      }
                    printf("\n");

                  }
             }

return 0;
}
