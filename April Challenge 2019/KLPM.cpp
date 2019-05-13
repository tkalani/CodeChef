#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string str) 
{ 
    int l = 0; 
    int h = str.length() - 1; 

    while (h > l) 
    { 
        if (str[l++] != str[h--]) 
        {
            return false; 
        } 
    } 
    return true;
} 

int SECONDSUBSTR(string S, int start, string first_substr)
{
    string tempS = S.substr(start, S.length());

    int length = tempS.length(), count = 0;
    
    for (int i = 0; i < length; i++)  
    {
        for (int len = 1; len <= length - i; len++) 
        {
            string second_substr = tempS.substr(i, len);
            if(isPalindrome(first_substr+second_substr))
                count++;
        }
    }
    return count;
}

int main()
{
    string S;
    cin >> S;

    int length = S.length();
    int count=0;
    
    for(int i=0; i<=length-2; i++)
    {
        for(int len_i=1; len_i<=length-i-1; len_i++)
        {
            string first_substr = S.substr(i, len_i);
            count += SECONDSUBSTR(S, i+len_i, first_substr);
        }
    }
    cout << count << endl;
}