#include <bits/stdc++.h>
using namespace std;

int main() {
    char m[4];
    int d;
    scanf("%s %d", &m, &d);
    if((m[0] == 'O' && m[1] == 'C' && m[2] =='T' && d == 31)  || (m[0] == 'D' && m[1] == 'E' && m[2] == 'C' && d == 25))
    {
        printf("yub\n");
    }
    else
    {
        printf("nope\n");
    }
}