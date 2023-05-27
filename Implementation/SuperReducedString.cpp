/*
    Source: HackerRank
    Link: https://www.hackerrank.com/challenges/reduced-string/problem?isFullScreen=false
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    int flag = 0;
    
    cin >> str;
    
    while(!flag)
    {
        flag = 1;
        for(int i = 0; i < str.length() - 1; i++)
        {
            if(str[i] == str[i + 1])
            {
                str.erase(str.begin() + i);
                str.erase(str.begin() + i);
                
                if(str.length() == 0)
                {
                    cout << "Empty String";
                    return 0;
                }
                flag = 0;
            }
        }
    }
    
    cout << str;
    
    return 0;
}
