#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
       long long n,k;

       cin>>n>>k;
       long long first=n-k+1;
       long long last=n;
       long long sum1=n*(n+1)/2;
       long long sum2=first*(first-1)/2;
       long long sum=sum1-sum2;
       if(sum%2==0)
       {
           cout<<"YES"<<endl;
       }
       else
       {
           cout<<"NO"<<endl;
       }
    }
    return 0;
}