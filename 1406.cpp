//HeoJunSang's Code
#include<iostream>
#include<list>

using namespace std;

int main()
{
    list<char> L;
    list<char>::iterator t;

    string s;
    cin >> s;
    
    for(int i=0;i<s.length();i++)
        L.push_back(s[i]);
    
    t = L.end();
    int N;
    cin >> N;

    for(int i=0;i<N;i++)
    {
        char cmd;
        cin >> cmd;
        switch(cmd)
        {
            case 'L':
                if(t != L.begin()) t--;
                break;
            case 'D':
                if(t != L.end()) t++;
                break;
            case 'B':
                if(t != L.begin())
                {
                    t--;
                    t = L.erase(t);
                }
                break;
            case 'P':
                char x;
                cin >> x;
                L.insert(t,x);
                break;
            default:
                break;
        }
    }
    for(auto s:L)
    {
        cout << s;
    }
}