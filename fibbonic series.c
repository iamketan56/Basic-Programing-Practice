#include<stdio.h>
main()
{
int n,i,f;
printf("enter the number");
scanf("%d",&n);
for(i=0;i<=n;i++)
{
f=fb(i);
printf("\n%d",f);
}
}
int fb(int n)
{
if(n==0)
{
return 0;
}
else if(n==1)
{
return 1;
}
else
{
return fb(n-1)+fb(n-2);
}
}
