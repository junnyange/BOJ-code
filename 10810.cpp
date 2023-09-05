//HeoJunSang's Code
#include<iostream>
using namespace std;

int main()
{
    int N,M;
    int i,j,k;
    int arr[101] = {0,};
    cin >> N >> M;
    for(int a=1;a<=M;a++)
    {
        cin >> i >> j >> k;
        for(int b=i;b<=j;b++) arr[b] = k; 
    }

    for(int c=1;c<=N;c++) cout << arr[c] << " ";
    return 0;
}