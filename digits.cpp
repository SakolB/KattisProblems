#include <bits/stdc++.h>
using namespace std;

int i(string s)
{
    if(s == "1")
    {
        return 1;
    }
    int i = 0;
    bool flag = true;
    int l = s.length();
    s = to_string(l);
    i++;
    while(flag)
    {
        int temp = s.length(); 
        i++;
        if( temp != l) 
        {
            l = temp; 
            s = to_string(l);
        }
        else
        {
            flag = false;
        }
    }
    return i; 
}

int main()
{
    
    string s;
    while(cin >> s && s!="END")
    {
        printf("%d\n", i(s));
    }
} 
