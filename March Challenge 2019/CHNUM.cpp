#include<iostream>
using namespace std;

int main()
{
    int test_cases = 0;
    cin >> test_cases;
    while(test_cases--)
    {
        int n;
        cin >> n;
        int arr[n];
        for(int i=0; i<n; i++)
        {
            int temp;
            cin >> temp;
            arr[i] = temp;
        }
        int positive=0, zeroes=0, negative=0;
        for(int i=0; i<n; i++)
            if(arr[i] > 0)
                positive++;
            else if(arr[i] == 0)
                zeroes++;
        negative = n-positive-zeroes;
        if(positive == n || negative == n)
            cout << n << " " << n << endl;
        else
            if(positive >= negative)
                cout << (positive+zeroes) << " " << negative << endl;
            else
                cout << (negative+zeroes) << " " << positive << endl;
    }
}