#include<bits/stdc++.h>
using namespace std;

bool find(string S1, string S2)
{
    int j = 0;
   for (int i=0; i<S2.length() && j<S1.length(); i++) 
        if (S1[j] == S2[i]) 
            j++; 

   return (j==S1.length()); 
}

int main()
{
    int test; cin >> test;
    while(test--)
    {
        string S1, S2;
        cin >> S1 >> S2;

        if(S1.length() < S2.length())
            if(find(S1, S2))
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        else
            if(find(S2, S1))
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
    }
}