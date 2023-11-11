#include <bits/stdc++.h>
using namespace std;

int main() {
    int y1, m1, d1, y2, m2, d2, courseNum, n;
    char name[31];
    scanf("%d", &n);
    bool eligible = false;
    bool coachExtension = false;
    while(n--)
    {
        scanf("%s %d/%d/%d %d/%d/%d %d", &name, &y1, &m1, &d1, &y2, &m2, &d2, &courseNum);
        if(y1 >= 2010 || y2 >= 1991)
        {
            printf("%s eligible\n", name);
        }
        else if(courseNum/5.0 > 8)
        {
            printf("%s ineligible\n", name);
        }
        else
        {
            printf("%s coach petitions\n", name);
        }
    }
    return 0;
}
