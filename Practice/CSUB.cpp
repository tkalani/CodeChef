#include<bits/stdc++.h>
using namespace std;
#define lli long long int

int main()
{
    lli test; cin >> test;
    while(test--)
    {
        lli N; cin >> N;
        string S; cin >> S;

        lli count=0;
        for(lli i=0; i<N; i++)
            if(S[i] == '1')
                count++;
        cout << ((count)*(count+1))/2 << endl;
    }
}