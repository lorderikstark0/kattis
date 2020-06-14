#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;int a;    
    cin >> n;
    int d=0;int val;
    cin >> val;
    for(int i=1;i<n;i++)
    {
        cin >> a;
        if(a<val)
        {
            d=i;
            val=a;
        }
    }
    cout <<d<<"\n";
    return 0;
}