#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        int n;
        cin >> n;
        string S; char X;
        cin >> S >> X;
        int count = 0;

        for (int i = 0; i < n; i++)  
            for (int len = 1; len <= n - i; len++) 
                if(S.substr(i, len).find(X)  != string::npos )
                    count++;

        cout << count << endl;
    }

    return 0;
}