#include<bits/stdc++.h>
using namespace std;

#define lli long long int

int main()
{
    int test; cin >> test;
    lli mod = 1000000007;
    while(test--)
    {
        lli n; cin >> n;
        if(n == 1)
        {
            cout << 1 << endl;
        }
        else
        {
            lli sum = 1;
            for(lli i=2; i<n+1; i++)
                sum = sum + i + sum*i;
            cout << sum % mod << endl;
        }
    }
}