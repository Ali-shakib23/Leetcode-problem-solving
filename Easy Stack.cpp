#include <iostream>
#include<iomanip>
#include <algorithm>
#include <stack>
using namespace std;


int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);

    stack <int> s;

    int n;
    cin>>n;
    int m;
    int x;
    while(n--)
    {
        cin>>x;
        if (x==1)
        {
            cin>>x;
            s.push(x);
        }
        else if (x==2)
        {
           if(!s.empty())
            s.pop();
        }
        else
        {   if (s.empty()){
                cout<<"Empty!";
            }
            else{
            cout<<s.top();
            }
        }
    }
}
