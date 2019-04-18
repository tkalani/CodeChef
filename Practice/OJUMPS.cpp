#include<bits/stdc++.h>
using namespace std;

#define lli long long int

int main()
{
    // int test; cin >> test;
    // while(test--)
    // {
        lli a;
        cin >> a;
        a = a%6;
        if(a==0 || a==1 || a==3)
            cout << "yes" << endl;
        else
            cout << "no" << endl;
    // }
    

    return 0;
}