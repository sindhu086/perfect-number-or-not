#include<stdio.h>
int main()
{
  int i,n,s=0;
  printf("enter the number in i:");
  scanf("%d",&i);
for(n=1;i>n;n++)
{
  if(i%n==0)
    s=s+n;
}
if(i==s)
  printf("perfect number");
else
  printf("not a perfect number");
}
