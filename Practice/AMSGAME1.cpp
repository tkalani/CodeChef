#include<bits/stdc++.h>
using namespace std;

#define lli long long int

lli gcd(lli a, lli b) 
{ 
    if (b == 0) 
        return a; 
    return gcd(b, a % b);  
      
} 

int main()
{
    int test; cin >> test;
    while(test--)
    {
        int N; cin >> N;

        lli gcd_; cin >> gcd_;
        for(lli i=0; i<N-1; i++)
        {
            lli temp; cin >> temp;
            gcd_ = gcd(temp, gcd_);
        }

        cout << gcd_ << endl;
    }
}