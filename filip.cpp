#include <bits/stdc++.h>
using namespace std;

int answer(char a[], char b[])
{
    for(int i = 2; i >= 0; i--)
    {
        if(a[i] > b[i])
        {
            return 0;
        }
        else if(a[i] < b[i])
        {
            return 1;
        }
    }
    return 0;
}

int main() {
    char a[4], b[4];
    scanf("%s %s", a, b);
    if(answer(a, b) == 0)
    {
        reverse(a, a+3);
        printf("%s\n", a);
    }
    else
    {
        reverse(b, b+3);
        printf("%s\n", b);
    }
}