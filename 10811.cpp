//HeoJunSang's Code
#include<iostream>
using namespace std;

int main()
{
    int N,M;
    int i,j,k;
    int arr[101] = {};
    for(int a=0;a<=101;a++) arr[a]=a;
    cin >> N >> M;
    for(int a=1;a<=M;a++)
    {
        cin >> i >> j;
        while(i<j)
        {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
            j--;
        }
    }

    for(int c=1;c<=N;c++) cout << arr[c] << " ";
    return 0;
}