//HeoJunSang's Code
#include<iostream>
using namespace std;

long long int fact(long long int N)
{
    if(N==0) return 1;
    else return N * fact(N-1);
}

int main()
{
    long long int N;
    cin >> N;
    cout << fact(N);
    return 0;
}