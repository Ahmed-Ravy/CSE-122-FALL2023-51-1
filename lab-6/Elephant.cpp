#include<stdio.h>

int main()
{
    int x,ans;
    scanf("%d",&x);
    if (x%5==0)
    {
        ans=x/5;
    }
    else if (x%5 != 0)
    {
        ans=(x/5)+1;
    }
    printf("%d",ans);
    
    

    return 0;
}
