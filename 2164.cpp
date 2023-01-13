//HeoJunSang's Code
#include<iostream>
#include<queue>
using namespace std;

int main()
{
    queue<int> q;
    int N;
    cin >> N;
    for(int i=1;i<=N;i++) q.push(i);

    int x = 1;
    while(q.size() > 1)
    {
        if(x%2==1) q.pop();
        else 
        {
            q.push(q.front());
            q.pop();
        }
        x++;
    }

    cout << q.front() << "\n";
    return 0;
}

