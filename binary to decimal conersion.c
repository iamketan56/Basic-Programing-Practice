#include<stdio.h>
#include<math.h>
int main()
{

    int binary=10101;
    int x=0,r;
    int sum=0;
    while(binary!=0)
    {
        r=binary%10;
        if(r==1)
        {
            sum+=r*pow(2,x);
        }

        binary=binary/10;
        x++;
        }
        printf("%d",sum);
}
