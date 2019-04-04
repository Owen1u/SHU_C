#include<stdio.h>
int main()
{
 int n=1;
for(n=1;n<=1000;n++)
 {
    if(n%3==1&&n%5==2&&n%7==3)
    printf("%d ",n);
 }
 return 0;
}
