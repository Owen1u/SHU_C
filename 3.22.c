#include<stdio.h>
int main()
{
 double sum,m=1,i=1;
 while(m>=1e-6)
 {
    m=m/i;
    sum=sum+m;
    i++;
 }
 printf("%.6lf",sum+1);
 return 0;
}
