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
        int count=0, start=0, c=0;

        for(int i=0; i<n; i++)
        {
            if(S.at(i) == X)
            {
                c = i+1;
            }
            count += c;
        }
        cout << count << endl;
    }
}