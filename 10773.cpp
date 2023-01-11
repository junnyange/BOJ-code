//HeoJunSang's Code
#include<iostream>
#include<stack>
using namespace std;

int main()
{
    stack<int> s;

    int N, X, sum=0;
    cin >> N;

    for(int i=0;i<N;i++)
    {
        cin >> X;
        if(X==0)
        {
            if(!s.empty()) 
            {
                sum -= s.top();
                s.pop();
            }
        }
        else
        {
            s.push(X);
            sum += X;
        }
    }
    cout << sum;
    return 0;
}