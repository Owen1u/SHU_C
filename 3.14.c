#include<stdio.h>
int main()
{
 int i=1,j=1,x;
 for(i=1;i<=9;i++)
 {
    for(j=i;j<=9;j++)
    {
     x=i*j;
     printf("%d*%d=%2d ",i,j,x);
    }
    printf("\n");
 }
 return 0;
}
