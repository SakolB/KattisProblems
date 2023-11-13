#include <bits/stdc++.h>
using namespace std;

int main() {
    int climb = 0;
    int desc = climb + 2;
    int n;
    int t;
    int min_t = INT_MAX;
    int min_t_climb_index;
    vector<int> temp;
    scanf("%d", &n);
    while(n--)
    {
        scanf("%d", &t);
        temp.push_back(t);
    }
    while(desc!=temp.size())
    {
        int k[2];
        k[0] = temp[climb];
        k[1] = temp[desc];
        if(max(k[0], k[1]) < min_t)
        {
            min_t = max(k[0], k[1]);
            min_t_climb_index = climb;
        }
        climb++;
        desc++;
    }
    {
        printf("%d %d\n", min_t_climb_index+1, min_t);
    }
    
    

}