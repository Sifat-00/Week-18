#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin >> n >> k;
        int ar[n];
        for(int i=0;i<n;i++) cin >> ar[i];
        int cnt = 0;

        int ans = 0;

        for(int i=0;i<n;i++)
        {
            if(cnt>0 && ar[i]==0)
            {
                cnt--;
                ans++;
            }
            else if(ar[i]>=k)
            {
                cnt+=ar[i];
            }
        }
        cout << ans <<endl;
    }
    return 0;
}
