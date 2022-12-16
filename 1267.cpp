//HeoJunSang's Code
#include<iostream>

using namespace std;

int main()
{
    int N;
    int K, Y=0, M=0;
    int sum = 0;

    cin >> N;
    for(int i=0;i<N;i++)
    {
        cin >> K;
        Y += (K+1)/30 + 1;
        M += (K+1)/60 + 1;
        sum += K;
    }
    Y *= 10;
    M *= 15;

    if(Y<M) cout << "Y " << Y;
    else if(Y>M) cout << "M " << M;
    else cout << "Y M " << Y;

    return 0;
}