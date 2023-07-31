/// + - X
#include<iostream>
using namespace std;
 int main()
 {
    int n,d=0;
    char a[5]; 
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>a;
        if ((a[0]=='X'&& a[1]=='+'&& a[2]=='+') || (a[0]=='+'&& a[1]=='+'&& a[2]=='X'))
        {
            d++;
        }
        else if ((a[0]=='X'&& a[1]=='-'&& a[2]=='-') || (a[0]=='-'&& a[1]=='-'&& a[2]=='X'))
        {
            d--;
        }
    }  
    cout<<d;
    
    return 0;
 }