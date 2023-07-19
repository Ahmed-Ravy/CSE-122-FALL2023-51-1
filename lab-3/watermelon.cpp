#include <iostream>
using namespace std;
int main()
{
    int w, a;
    cin >> w;
    a = w % 2;
    if (w == 2)
    {
        cout<<"NO\n";
    }
    else if (a == 0)
    {
       cout<<"YES\n";
    }
    else if (a == 1)
    {
        cout<<"NO\n";
    }

    return 0;
}