#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tb = 0, lr = 0, n;
    char k[5];
    scanf("%d", &n);
    while(n--)
    {
        scanf("%s", k);
        if(k[0] == '0') tb++;
        if(k[1] == '0') tb++;
        if(k[2] == '0') lr++;
        if(k[3] == '0') lr++;
    }
    int buildable_tb = tb/2;
    int buildable_lr = lr/2;
    int sword = min(buildable_tb, buildable_lr);
    int leftover_buildable_tb  = 0;
    int leftover_buildable_lr = 0;
    if(sword == buildable_tb)
    {
        leftover_buildable_lr+=  (buildable_lr-sword)*2;
    }
    else if(sword == buildable_lr)
    {
        leftover_buildable_tb+= (buildable_tb-sword)*2;
    }

    int tb_odd = tb%2;
    int lr_odd = lr%2;
    leftover_buildable_lr += lr_odd;
    leftover_buildable_tb += tb_odd;
    printf("%d %d %d\n", sword, leftover_buildable_tb, leftover_buildable_lr);
}