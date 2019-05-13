#include<iostream>
using namespace std;

string appendK(string n, string k, int count)
{
    for(int j=0; j<count; j++)
        n += k;
    return n;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string n, k, ans="";
        cin >> n >> k;
        int count=0, index=-1, temp_count=0, min_el=10, prev_index=-1;
        while(index != n.length()-1)
        {
            min_el = 10;
            for(int j=index+1; j<n.length(); j++)
                if((n.at(j)-'0') <= min_el)
                {
                    index = j;
                    min_el = n.at(j)-'0';
                }
            for(int j=prev_index+1; j<index+1; j++)
                if((n.at(j)-'0') > min_el)
                    temp_count++;
                else
                    ans += n.at(j);
            prev_index = index;
            count += temp_count;
            temp_count = 0;
        }
        ans = appendK(ans, k, count);
        n = ans;
        count = 0;
        ans = "";
        for(int j=0; j<n.length(); j++)
            if((n.at(j)-'0') >= (k.at(0)-'0'))
                count++;
            else
                ans += n.at(j);
        ans = appendK(ans, k, count);
        cout << ans << endl;
    }
}