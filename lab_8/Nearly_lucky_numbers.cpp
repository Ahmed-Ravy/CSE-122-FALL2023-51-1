#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a;
    long long int cnt=0;
    cin>>a;
    while(a!=0)
    {
    if((a%10)==4|| (a%10)==7)
    {
        cnt++;
        a=a/10;
    }
    else
    {
     a=a/10;
    }
    }
    if(cnt==4||cnt==7)
    {
    cout<<"YES"<<endl;
    }
    else
    {
    cout<<"NO"<<endl;
    }

    return 0;
}
