//HeoJunSang's Code
#include<iostream>

using namespace std;

int main()
{
    int value[1000001];
    bool arr[2000001];
    int N,c,cnt = 0,x;
    cin >> N;
    for(int i=0;i<N;i++)
        cin >> value[i];
    cin >> x;
    for(int i=0;i<N;i++)
    {
        if(x-value[i] > 0 &&arr[x-value[i]] == true) cnt++;        
        arr[value[i]] = true;
    }

    cout << cnt;
}