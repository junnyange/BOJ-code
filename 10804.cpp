//HeoJunSang's Code
#include<iostream>
#include<vector>

using namespace std;

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    vector<int> v(20);
    int a,b;

    for(int i=0;i<20;i++)
    {
        v[i] = i+1;
    }

    for(int i=0;i<10;i++)
    {
        cin >> a >> b;
        a--; b--;
        while(a<b)
        {
            swap(&v[a],&v[b]);
            a++;
            b--;
        }
    }

    for(int i=0;i<20;i++)
    {
        cout << v[i] << " ";
    }
}