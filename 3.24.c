#include<stdio.h>
#include<math.h>
int main()
{
 double x;
 while(pow(1+x,10)<=2)
    x=x+0.001;
 printf("%.1f%%",x*100);
}
