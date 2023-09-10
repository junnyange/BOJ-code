//HeoJunSang's Code
#include<iostream>

using namespace std;

int main()
{
    int N, maxV = INT32_MIN, minV = INT32_MAX , S;
    cin >> N;
    for(int i=0;i<N;i++)
    {
        cin >> S;
        maxV = max(S, maxV);
        minV = min(S, minV);
    }
    cout << maxV * minV;
    return 0;
}