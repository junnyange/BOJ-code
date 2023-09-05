//HeoJunSang's Code
#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
    
    int N;
    cin >> N;
    for(int i=1;i<=2*N-1;i++)
    {
        for(int j=1;j<=abs(N-i);j++) cout << " ";
        if(i > N) 
            for(int j=1;j<=2*(2*N-i)-1;j++) cout << "*";
        else
            for(int j=1;j<=2*i-1;j++) cout << "*";
        cout << "\n";
    }
}
