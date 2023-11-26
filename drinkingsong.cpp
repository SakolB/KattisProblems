#include <bits/stdc++.h>
using namespace std;

int main()
{
    char drink[21];
    int n;
    scanf("%d", &n);
    scanf("%s", drink);
    while(n>0)
    {
        string bottle = "bottles";
        if(n == 1)
        {
            bottle = "bottle";
        }
        string phrase1 = to_string(n) + " " + bottle + " of " + string(drink)+  " on the wall, " + to_string(n) + " " +  bottle + " of " + string(drink) +  ".";
        n--;
        if(n==1)
        {
            bottle = "bottle";
        }
        string phrase2 = "";
        if(n == 0)
        {
            phrase2+= "Take it down, pass it around, ";
        }
        else
        {
            phrase2+= "Take one down, pass it around, ";
        }
        if(n>0)
        {
            phrase2 +=  to_string(n) + " " + bottle + " of " + string(drink)+  " on the wall.";
        }
        else
        {
            phrase2 += "no more bottles of " + string(drink)+  ".";
        }
        cout << phrase1 << endl;
        cout << phrase2 << endl;
        cout << endl;
    }
}