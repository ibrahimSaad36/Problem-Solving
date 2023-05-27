/*
    Source: HackerRank
    Link: https://www.hackerrank.com/challenges/big-sorting/problem?isFullScreen=false
*/

#include <bits/stdc++.h>

using namespace std;

int criteria(const string& str1, const string& str2) 
{
    if (str1.length() != str2.length()) 
    {
            return str1.length() < str2.length();
    }
    return str1 < str2;
}

int main()
{
    int n;
    vector<string> numbers;
    
    cin >> n;
    
    for(int i = 0; i < n; i++)
    {
        string str;
        cin >> str;
        numbers.push_back(str);    
    }
    
    sort(numbers.begin(), numbers.end(), criteria);
    
    for(int i = 0; i < n; i++)
    {
        cout << numbers[i] << endl;   
    }
    
    return 0;
}
