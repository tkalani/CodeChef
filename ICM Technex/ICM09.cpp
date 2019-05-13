#include<iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        string days;
        cin >> days;
        int zeroes=0, ones=0, change=0;
        for(int i=0; i<n; i++)
        {
            if(days.at(i) == '1')
                ones++;
            else if(days.at(i) == '0')
                zeroes++;
            if(ones < zeroes)
            {
                change++;
                ones++;
                zeroes--;
            }
        }
        cout << change << endl;
    }
}