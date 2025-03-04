#include<bits/stdc++.h>
using namespace std;
int main()
{
   
    
    int t;
    cin >> t;
    while(t--)
    {
        int n,x,y;
        cin >> n >> x >> y;
        int mn = min(x,y);
        if(n%mn == 0)
        {
            
            cout << n/mn <<endl;
        }
        else
        {
             cout << (n/mn)+1 <<endl;
        }
    
    }
    return 0;
}