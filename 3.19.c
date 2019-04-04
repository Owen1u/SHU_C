#include<stdio.h>
int main()
{
 char c;
 while((c=getchar())!='\n')
    printf("%2c",c);
 return 0;
}
