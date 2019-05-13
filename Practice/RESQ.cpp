#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n) 
{  
    if (n <= 1)  return false; 
    if (n <= 3)  return true;
    if (n%2 == 0 || n%3 == 0) return false; 
  
    for (int i=5; i*i<=n; i=i+6) 
        if (n%i == 0 || n%(i+2) == 0) 
           return false; 
  
    return true; 
}

bool isPerfectSquare(int x) 
{
  long double sr = sqrt(x); 
  return ((sr - floor(sr)) == 0); 
} 

int findAns(int N)
{
    int p=sqrt(N), k, i;
    for(i=p;i>=1;i--)
    {
        if(N%i==0)
        {
            k=N/i;
            break;
        }
    }
    return k-i;
}

int main()
{
    int test; cin >> test;
    while(test--)
    {
        int N; cin >> N;
        if(isPrime(N))
            cout << N-1 << endl;
        else if(isPerfectSquare(N))
            cout << 0 << endl;
        else
            cout << findAns(N) << endl;
    }

    return 0;
}