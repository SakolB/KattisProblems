#include <bits/stdc++.h>
using namespace std;
int main() {
    int x, y, n;
    scanf("%d %d %d", &x, &y, &n);
    for(int i = 1; i <=n; i++)
    {
        string s = "";
        if(i%x == 0)
        {
            s += "Fizz";
        }
        if(i%y == 0)
        {
            s += "Buzz";
        }
        if(s.empty())
        {
            s+= to_string(i);
        }
        printf("%s\n", s.c_str());
    }
}