#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        int N, M, K, fence=0;
        cin >> N >> M >> K;
        int arr[N+2][M+2];
        for(int i=0; i<N+2; i++)
            for(int j=0; j<M+2; j++)
                arr[i][j] = 0;
        
        for(int i=0; i<K; i++)
        {
            int plant_row, plant_column;
            cin >> plant_row >> plant_column;
            arr[plant_row][plant_column] = 1;
        }

        for(int i=1; i<N+2; i++)
            for(int j=1; j<M+2; j++)
                if(arr[i][j] == 1)
                {
                    if(!arr[i][j-1])
                        fence++;
                    if(!arr[i][j+1])
                        fence++;
                    if(!arr[i-1][j])
                        fence++;
                    if(!arr[i+1][j])
                        fence++;
                }
        cout << fence << endl;
    }
    return 0;
}