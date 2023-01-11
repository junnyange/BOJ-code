//HeoJunSang's Code
#include<iostream>
#include<stack>

//stack stl 연습용

using namespace std;

stack<int> s;

void push(int x)
{
    s.push(x);
}

void pop()
{
    if(s.empty()) cout << -1 << "\n"; 
    else
    {
        cout << s.top() << "\n";
        s.pop();
    }
}

void size()
{
    cout << s.size() << "\n";
}

void empty()
{
    if(s.empty()) cout << 1 << "\n";
    else cout << 0 << "\n";
}

void top()
{
    if(s.empty()) cout << -1 << "\n";
    else cout << s.top() << "\n";
}


int main()
{
    int N;
    string cmd;
    cin >> N;
    for(int i=0;i<N;i++)
    {
        cin >> cmd;
        if(cmd == "push")
        {
            int x;
            cin >> x;
            push(x);
        }
        else if(cmd == "pop")
        {
            pop();
        }
        else if(cmd == "size")
        {
            size();
        }
        else if(cmd == "empty")
        {
            empty();
        }
        else
        {
            top();
        }
    }
}