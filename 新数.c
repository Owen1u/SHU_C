#include <stdio.h>

#include <math.h>

int main()

{

    int n,m;

    int cal(int n);

    scanf("%d",&n);

    m=cal(n);

    printf("%d*%d=%d\n",m,2,m*2);

    return 0;

}

 

int cal(int n)
{
int a,sum=0,m,b=1,c=10,d=1;
for(a=1;a<=10;a++) 
 {
 	m=n%c/d;
 	c=c*10;
 	d=d*10;
 	if(m==2||m==3||m==5||m==7||m==-2||m==-3||m==-5||m==-7)
 	{
 	sum=sum+m*b;
 	b=b*10;
 }
 }
 return (sum);

}
