//HeoJunSang's Code
#include<iostream>

using namespace std;

int main()
{
    int p[11] ={0,};
    int cnt = 0;
    int N;
    cin >> N;

    while(N!=0)
    {
        int r = N%10;

        if(p[r] == 0)
        {
            if(r == 6 && p[r] ==0 && p[9] != 0) p[9]--;
            else if(r == 9 && p[r] ==0 && p[6] != 0) p[6]--;
            else
            {
                for(int i=0;i<10;i++) 
                {
                    p[i]++;
                }
                cnt++;
            }
        }

        if(p[r] != 0) p[r]--;

        N = N/10;
    }
    cout << cnt;
}