//HeoJunSang's Code
#include<iostream>

using namespace std;

int main()
{
    int N;
    cin >> N;
    int d = 3;
    for(int i=1;i<N;i++)
    {
        d = d + (d-1);
    }
    cout << d*d;
    return 0;
}