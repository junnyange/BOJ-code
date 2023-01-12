//HeoJunSang's Code



//중요한 점
//!s.empty() && s.top() == '(' 의 조건에서 순서를 바꾸면
// )( 이 경우를 파악하지 못함
// &&는 L->R 이기에 비어있는지를 먼저 확인하지 않으면 top에 접근해 오류발생
//(오류메시지가 뜨진 않음)



#include<iostream>
#include<stack>
#include<string>
using namespace std;

int main()
{
    string str;
    bool status;
    while(true){
        stack<char> s;
        status = true;
        getline(cin, str);

        if(str == ".") break;

        for(int i=0;i<str.length();i++)
        {
            if(str[i]=='(' || str[i]=='[') s.push(str[i]);
            else if(str[i] == ')')
            {
                if(!s.empty() && s.top() == '(') s.pop();
                else
                {
                    status = false;
                    break;
                }
            }
            else if(str[i] == ']')
            {
                if(!s.empty() && s.top() ==  '[') s.pop();
                else
                {
                    status = false;
                    break;
                }
            }
        }
        
        if(status && s.empty()) cout << "yes" << "\n";
        else cout << "no" << "\n";
    }
}