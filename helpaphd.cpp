#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    int a, b;
    char c[9];
    int addition;
    scanf("%d", &n);
    while(n--)
    {
        scanf("%s", &c);
        if(c[0] == 'P')
        {
            printf("skipped");
        }
        else
        {
            for(int i = 0; i < 9; i++)
            {
                if(c[i] == '+')
                {
                    char ac[i];
                    char bc[8-i];
                    copy(c, c+i, ac);
                    copy(c+(i+1), c+9, bc);
                    a = atoi(ac);
                    b = atoi(bc);
                    printf("%d", a+b);
                    break;
                }
            }
        }
        printf("\n");
    }
}