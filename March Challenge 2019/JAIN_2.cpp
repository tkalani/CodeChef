#include "bits/stdc++.h"
using namespace std;

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int test;
    cin >> test;

    while(test--)
    {
        long long arr[32] = {0};

        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            string str;
            cin >> str;

            int hash = 0;
            for (int j = 0; j < str.length(); j++)
            {
                switch (str[j])
                {
                case 'a':
                    hash = hash | (1);
                    break;

                case 'e':
                    hash = hash | (1 << 1);
                    break;

                case 'i':
                    hash = hash | (1 << 2);
                    break;

                case 'o':
                    hash = hash | (1 << 3);
                    break;

                case 'u':
                    hash = hash | (1 << 4);
                    break;
                }
            }

            arr[hash]++;
        }

        long long ans = 0;
        for (int i = 0; i < 32; i++)
        {
            for (int j = i; j < 32; j++)
            {
                if ((i | j) == 31)
                {
                    if (arr[i] == 0 || arr[j] == 0)
                        continue;

                    // cout << i << " " << j << "\n";

                    if (i == j)
                        ans += arr[i] * (arr[i] - 1) / 2;
                    else
                        ans += arr[i] * arr[j];
                }
            }
        }

        cout << ans << "\n";
    }

    return 0;
}