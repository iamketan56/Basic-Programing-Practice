#include<stdio.h>
int main()
{
    int number;
    printf("enter the number to find factorial\n");
    scanf("%d",&number);
    int f=fact(number);
    printf("factorial of %d is %d",number,f);
}
int fact(int n)
{
    if(n==0)
    {
        return 1;
    }
    else
    {
        return n*fact(n-1);
    }
}
