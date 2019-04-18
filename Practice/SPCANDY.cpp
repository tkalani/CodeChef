#include<bits/stdc++.h>
using namespace std;

#define lli long long int

int main()
{
    int test; cin >> test;
    while(test--)
    {
        lli N, K;
        cin >> N >> K;
        if(K!=0)
            cout << N/K << " " << N%K << endl;
        else 
            cout << 0 << " " << N << endl;
    }
}