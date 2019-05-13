#include<iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, k;
        cin >> n >> k;
        int num = (k*(k+1))/2 + n-k;
        cout << num << endl;
    }
}