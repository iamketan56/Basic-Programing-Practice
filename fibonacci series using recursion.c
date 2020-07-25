#include<stdio.h>
void fab(int n)
{
    int a=0,b=1,c;
    if(n>0)
    {
        c=a+b;
        printf("%d",c);
        a=b;
        b=c;
        fab(n-1);
    }
   }
int main()
{
    int n;
    printf("enter the element");
    scanf("%d",&n);
    printf("fibonacci series is:\n");
    printf("%d %d",0,1);
    fab(n-2);
    return 0;
}

