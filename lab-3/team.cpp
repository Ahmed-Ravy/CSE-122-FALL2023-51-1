

// submission due.

#include <bits/stdc++.h>
using namespace std;
int main()
{
    
    int n;
    cin >> n;
    int a, s, d, f = 0;
    for (int i = 0; i < n; i++)
    {

        cin >> a >> s >> d;
        if (a == 1 && s==1)
        {
            f = f + 1;
        }
        else if (s==1 && d==1)
        {
           f = f + 1;
        }
        else if (a==1 && d==1)
        {
           f = f + 1;
        }
       
    }
    cout << f << endl;
    return 0;
}