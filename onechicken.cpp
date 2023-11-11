#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    int m;
    char c;
    scanf("%d %d", &n, &m);
    if(abs(m-n) == 1 || m-n == 0)
    {
        c = '\0';
    }
    else
    {
        c = 's';
    }
    if(m-n>=0)
    {
        printf("Dr. Chaz will have %d piece%c of chicken left over!\n", m-n, c);
    }
    else
    {
        printf("Dr. Chaz needs %d more piece%c of chicken!\n", abs(m-n), c);
    }
}