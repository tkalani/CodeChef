#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;

    while(test--)
    {
        string st;
        cin >> st;

        if(st.find("MUJ") != string::npos)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}