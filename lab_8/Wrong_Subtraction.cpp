#include<stdio.h>
int main()
{
    long long a,b,c=0;
    scanf("%lld %lld",&a,&b);
    c=a;
    for (int i = 0; i < b; i++)
    {
        if (c%10==0)
        {
            c=c/10;
        }
        else 
        {
            c--;
        }
        
    }
    printf("%lld",c);

    return 0;
}
