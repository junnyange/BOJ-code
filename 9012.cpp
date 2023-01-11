//HeoJunSang's Code
#include<iostream>
#include<stack>
using namespace std;

int main()
{
    string str;
    stack<char> s;
    int N;
    bool status;
    cin >> N;
    for(int i=0;i<N;i++)
    {
        cin >> str;
        status = true;
        for(int j=0;j<str.length();j++)
        {
            if(str[j]=='(') s.push('(');
            else
            {
                if(s.empty()) 
                {
                    status = false;
                    break;
                }
                else if(s.top() == '(') s.pop();
            }
        }

        if(!s.empty()) status = false;
        status?cout << "YES" << "\n":cout << "NO"<<"\n";

        while(!s.empty()) s.pop();
    }
}