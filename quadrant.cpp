#include <iostream>
using namespace std;

int quadrant_number(int x ,int y)
{
    int l=1;
    if(x>0 && y>0)
    {
        l=1;
    }
    else if(x<0 && y>0)
    {
        l=2;
    }
    else if(x<0 && y<0)
    {
        l=3;
    }
    else {
        l=4;
    }
    return l;
}

int main()
{
    int x ;
    cin >> x;
    int y;
    cin >> y;
    cout << quadrant_number(x,y)<< endl;
    return 0;
}