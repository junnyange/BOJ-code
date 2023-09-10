//HeoJunSang's Code
#include<iostream>

using namespace std;

void hanoi(int n, int from, int to, int sub)
{
    
    if(n==1) 
    {
        cout << from << " " << to << "\n";
    }
    else 
    {
        hanoi(n-1, from, sub, to);
        cout << from << " " << to << "\n";
        hanoi(n-1, sub, to, from);
    }
}

int main()
{
    int N;
    cin >> N;
    cout << (1<<N) -1 << "\n";
    hanoi(N,1,3,2);
    return 0;
}