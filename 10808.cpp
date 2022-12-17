//HeoJunSang's Code
#include<iostream>
#include<string>
using namespace std;

int main()
{
    int array[27] = {0,};
    string S;
    cin >> S;
    for(int i=0;i<S.size();i++)  //for(auto c:s)
        array[S[i]-97]++; 
    for(int i=0;i<26;i++)
        cout << array[i] << " ";
}