//HeoJunSang's Code
#include<iostream>
using namespace std;

int main()
{
    int N;
    bool poss;
    cin >> N;
    for(int i=0;i<N;i++)
    {
        char alpha1[27] = {0,};
        char alpha2[27] = {0,};
        string s1, s2;
        cin >> s1 >> s2;
        for(int j=0;j<s1.length();j++)
        {
            alpha1[s1[j]-97]++;
        }
        for(int j=0;j<s2.length();j++)
        {
            alpha2[s2[j]-97]++;
        }

        poss = true;
        for(int j=0;j<26;j++)
        {
            if(alpha1[j] != alpha2[j]) poss = false;
        }
        if(poss) cout << "Possible" << "\n";
        else cout << "Impossible" << "\n";
    }

}