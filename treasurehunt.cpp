#include <bits/stdc++.h>
using namespace std;

int main()
{
    char a[200][200];
   
    int R, C, x = 0, y = 0;
    scanf("%d %d", &R, &C);
    for(int i = 0; i < R; i++)
    {
            char input[C+1];
            scanf("%s", input);
            for(int j = 0; j < C; j++)
            {
                a[i][j] = input[j];
            }
    }
    
    bool flag = true;
    int i = 0;
    while(flag)
    {
        if(x >= C || x < 0 || y >= R || y < 0)
        {
            printf("Out\n");
            flag = false;
        }
        if(i > R*C*2)
        {
            printf("Lost\n");
            flag = false;
        }
        if(a[y][x] == 'T')
        {
            printf("%d\n", i);
            flag = false;
        }
        else if(a[y][x] == 'N')
        {
            y--;
        }
        else if(a[y][x] == 'S')
        {
            y++;
        }
        else if(a[y][x] == 'E')
        {
            x++;
        }
        else if(a[y][x] == 'W')
        {
            x--;
        }
        i++;

        
    }


}