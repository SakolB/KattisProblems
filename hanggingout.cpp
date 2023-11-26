#include <bits/stdc++.h>
using namespace std;

int main()
{
    int l, x;
    char action[6];
    scanf("%d %d", &l, &x);
    int total = 0;
    int deny = 0;
    while(x--)
    {
        int p;
        scanf("%s %d", action, &p);
        if(action[0] == 'e')
        {
            if(total + p > l)
            {
                deny++;
            }
            else
            {
                total+=p;
            }
        }
        else
        {
            total-=p;
        }
    }
    printf("%d\n", deny);

}