#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

// for using setpricion method icnlude iomanip
void getAverage(vector<int>&arr ,int n)
{
  double avg=0;
  for(int i=0;i<n;i++)
  {
    avg=avg+arr[i];
  }
  avg=avg/n;
cout << setprecision(5)<<avg<<"%"<<"\n";
}


int main()
{
    int c ;
    cin >>c;
    vector<int> arr;
    vector<vector<int>> multivec;
    while(c-- >0)
    {
        int n ;
        cin >> n;
        for(int i=0;i<n;i++)
        {
            arr.push_back(i);
        }
      multivec.push_back(arr);
    }
    int size=multivec.size();
    int p=arr.size();
    for(int i=0;i<size;i++)
    {
      getAverage(arr,p);
    }
  return 0;
}
