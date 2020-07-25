#include<stdio.h>
void gcd(int ,int);
int main()
{
    printf("enter two number");
    int m,n;
    scanf("%d%d",&m,&n);
    gcd(m,n);
    }
void gcd(m,n)
{
    if(m<n)
    {
      if(n%m==0)
      {
          printf("%d",m);
      }
      else
      {
          gcd(m-1,n);
      }
    }
    if(m>n)
    {
        if(m%n==0)
        {
             printf("%d",n);
        }
        else
        {
            gcd(m,n-1);
        }
    }
}
