#include<iostream>
using namespace std;
int main()
{
    int n,k,arr[100],cnt=0,l=0;
    cin>>n>>k;
    for (int i = 1; i <= n; i++)
    {
        cin>>arr[i];        
    }
    for (int i = 1; i <= n; i++)
    {
        if (arr[i]==0)
        {
           l;
        }
        
        else if (arr[i]>=arr[k])
        {
            cnt++;
        }
    }
    
    cout<<cnt<<endl;
    return 0;
}
