#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    int a, x, i;
    char s[100];
    scanf("%d", &x);
    for (i = 0; i <= x; i++)
    {
        gets(s);
        a = strlen(s);
        if (a <= 10)
        {
            printf("%s\n", s);
        }

        else if (a > 10)
        {
            printf("%c%d%c\n", s[0], a - 2, s[a - 1]);
        }
    }

    return 0;
}
