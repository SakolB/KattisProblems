#include <bits/stdc++.h>
using namespace std;
int Battle(vector<int> armyG, vector<int> armyM)
{
    sort(armyG.begin(), armyG.end());
    reverse(armyG.begin(), armyG.end());
    sort(armyM.begin(), armyM.end());
    reverse(armyM.begin(), armyM.end());
    while(armyG.size()!=0 && armyM.size()!=0)
    {
        if(armyG[armyG.size()-1] < armyM[armyM.size()-1])
        {
            armyG.pop_back();
        }
        else
        {
            armyM.pop_back();
        }
    }
    if(armyG.empty() && armyM.empty())
    {
        return 2;
    }
    else if(armyG.empty())
    {
        return 0;
    }
    return 1;
}
int main() {
    int T;
    scanf("%d", &T);
    while(T--)
    {
        int nG, nM;
        scanf("\n%d %d", &nG, &nM);
        vector<int> armyG;
        vector<int> armyM;
        int temp;
        while(nG--)
        {
            scanf("%d", &temp);
            armyG.push_back(temp);
        }
        while(nM--)
        {
            scanf("%d", &temp);
            armyM.push_back(temp);
        }
        int i = Battle(armyG, armyM);
        if(i == 0)
        {
            printf("MechaGodzilla\n");
        }
        else if(i == 1)
        {
            printf("Godzilla\n");
        }
        else
        {
            printf("uncertain\n");
        }
        

    }
}

