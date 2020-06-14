#include <iostream>
#include <string>
using namespace std;

int sum(string p)
{
    //temporary string
    string temp="";
    //holds sum of numbers
    int sum=0;
    for(char ch:p)
    {
        //if current character a digit 
        if(isdigit(ch)){
            temp+=ch;
        }
        else {
            //increment sum by number found earlier
            sum+=atoi(temp.c_str());
            //reset tempoarry sring to empty
            temp="";
        }
    }
   // atoi(temp.c_str()) takes care of trailing 
    // numbers
    return sum+atoi(temp.c_str()); 
}

int main()
{
    int n;
    cin >> n;
    while(n-->0)
    {   
        string p;
        cin >>p;
        if(p=="P=NP")
        {
            cout<<"skipped"<<endl;
        }
        else{
                cout <<sum(p)<<endl;
        }
    }
    return 0;
}