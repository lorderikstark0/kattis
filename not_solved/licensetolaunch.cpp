#include <bits/stdc++.h>
using namespace std;
#define pb push_back
//not solved 
int main()
{
    int n ;
    cin >> n;
    vector<int> arr;
    while(n-->0)
    {
        int p;
        cin >> p;
        arr.pb(p);
    }
    
    vector<int> arr1=arr;
    sort(arr.begin(),arr.end());

    int res=0;
    for(size_t i=0;i<arr1.size();i++)
    {
        if(arr1[i]==arr[0])
        {
            res=i;
        }
        
    }
    cout << res<<endl;
return 0;



}