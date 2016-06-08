#include<stdio.h>
int main()
{
int n,r,num=0;
while(n!=0)
{
r=n%10;
num=num*10+r;
n/=10;
}
printf("%d",num);
return 0;
}
