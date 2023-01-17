//HeoJunSang's Code
#include<iostream>
#include<list>
#include<vector>

using namespace std;


int main()
{
    list<int> L ={};
    vector<int> v;
    int N,K;
    cin >> N >> K;
    
    for(int i=1;i<=N;i++) L.push_back(i);

    L.push_back(-1); //이게 나오면 처음으로 보내기 위함

    auto cursor = L.begin();

    for(int i=0;i<N;i++)
    {
        if(L.size()==1)
        {
            v.push_back(*cursor);
        }
        else if(L.size()==2)
        {
            v.push_back(*cursor);
            cursor = L.erase(cursor);
            if(*cursor==-1) cursor = L.begin(); //-1이면 처음으로 보낸다
        }
        else
        {
            for(int j=0;j<K-1;j++)
            {
                cursor++;
                if(*cursor==-1) cursor = L.begin(); //-1이면 처음으로 보낸다
            }
            v.push_back(*cursor);
            cursor = L.erase(cursor);
            if(*cursor==-1) cursor = L.begin(); //-1이면 처음으로 보낸다   
        }
    }

    cout << "<";
    for(int i=0;i<v.size();i++)
    {
        cout << v[i];
        if(i != v.size()-1) cout << ", ";
    }
    cout << ">";
}