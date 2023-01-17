//HeoJunSang's Code
#include<iostream>
using namespace std;

int main()
{
    int num = 0;
    string s1, s2;
    cin >> s1;
    cin >> s2;
    char alpha1[27] = {0,};
    char alpha2[27] = {0,};
    for(int j=0;j<s1.length();j++)
    {
        alpha1[s1[j]-97]++;
    }
    for(int j=0;j<s2.length();j++)
    {
        alpha2[s2[j]-97]++;
    }

    for(int j=0;j<26;j++)
    {
        if(alpha1[j] > alpha2[j])
        {
            num += alpha1[j] - alpha2[j];
            alpha1[j] = alpha2[j];
        }
        else if(alpha1[j] < alpha2[j])
        {
            num += alpha2[j] - alpha1[j];
            alpha2[j] = alpha1[j];
        }
    }
    cout << num << "\n";
}