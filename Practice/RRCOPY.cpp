#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test; cin >> test;
    while(test--)
    {
        int n; cin >> n;
        int count=0;
        map<int, bool> m;
        for(int i=0; i<n; i++)
        {
            int temp; cin >> temp;
            if(m[temp])
                continue;
            else
            {
                m[temp] = true;
                count++;
            }
        }
        cout << count << endl;
    }
}