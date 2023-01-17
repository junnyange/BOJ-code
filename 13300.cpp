//HeoJunSang's Code
#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int N,K, num=0;
    int arr[2][6] ={0,};
    cin >> N >> K;
    for(int i=0;i<N;i++)
    {
        int s,x;
        cin >> s >> x;
        arr[s][x-1]++;
    }

    for(int i=0;i<=1;i++)
    {
        for(int j=0;j<6;j++)
        {
            if(arr[i][j] != 0)
            {
                if(arr[i][j] <= K)
                    num++;
                else
                {
                    if(arr[i][j] % K > 0)
                    {
                        int x = arr[i][j] / K + 1;
                        num += x; 
                    }
                    else
                        num += arr[i][j] / K;
                }
            }
        }
    }
    
    cout << num << "\n";
}