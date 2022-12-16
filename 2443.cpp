//HeoJunSang's Code
#include<iostream>

using namespace std;

int main()
{
    int N;
    cin >> N;
    for(int i=N;i>0;i--)
    {
        for(int k=N;k>i;k--)
        {
            cout << " ";
        }
        for(int j=0;j<i*2-1;j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
    return 0;
}