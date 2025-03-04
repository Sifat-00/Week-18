#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin >> n;

        string ar;
        cin >> ar;

        int cnt = 0;


        for(int i=0;i<n;i++)
        {
            if(ar[i] == '@')cnt++;
            else if( i+1 < n && ar[i] == '*' && ar[i+1] == '*') break;
            
        }
        cout << cnt << endl;
    }
    return 0;
}

