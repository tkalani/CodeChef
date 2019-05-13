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

int main()
{
    int test; cin >> test;
    while(test--)
    {
        int n1, n2, n3;

        cin >> n1 >> n2;

        n3=n1+n2+1;
        while(true)
        {
            if(isPrime(n3))
                break;
            n3++;
        }
        
        cout << n3-n2-n1 << endl;
    }
}