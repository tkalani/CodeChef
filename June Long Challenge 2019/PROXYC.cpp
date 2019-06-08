#include<bits/stdc++.h>
using namespace std;

bool checkCondition(string S, int day, int day1, int day2)
{
    return (S[day1]=='P' || S[day2]=='P');
}

int main()
{
    int test; cin >> test;
    while(test--)
    {
        int length; cin >> length;
        string S; cin >> S;

        int min_days = ceil(length*0.75);
        int present_days = count(S.begin(), S.end(), 'P');
        int count=0;

        if(present_days >= min_days)
            cout << 0 << endl;
        else
        {
            bool flag = false;
            for(int i=2; i<length-2; i++)
            {
                if(S[i] == 'A')
                {
                    if(checkCondition(S, i, i-1, i-2) && checkCondition(S, i, i+1, i+2))
                        count++;
                    if(present_days+count >= min_days)
                    {
                        flag = true;
                        break;
                    }
                }
            }
            if(flag)
                cout << count << endl;
            else
                cout << -1 << endl;
        }
    }
}