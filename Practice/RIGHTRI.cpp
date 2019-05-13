#include<bits/stdc++.h>
using namespace std;

bool checkCondition(int n1, int n2, int n3)
{
    if(n1 == n2+n3)
        return true;
    return false;
}

int main()
{
    int N; cin >> N;
    int count=0;
    for(int i=0; i<N; i++)
    {
        int x1, y1, x2, y2, x3, y3;
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

        int l12_2, l23_2, l13_2;
        l12_2 = pow((x2-x1), 2) + pow((y2-y1), 2);
        l23_2 = pow((x2-x3), 2) + pow((y2-y3), 2);
        l13_2 = pow((x1-x3), 2) + pow((y1-y3), 2);

        if(checkCondition(l12_2, l23_2, l13_2) || checkCondition(l23_2, l13_2, l12_2) || checkCondition(l13_2, l12_2, l23_2))
            count++;
    }
    cout << count << endl;
}