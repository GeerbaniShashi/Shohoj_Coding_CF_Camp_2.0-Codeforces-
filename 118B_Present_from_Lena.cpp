#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n;
    cin>>n;
    for(ll i=0; i<=n; i++)
    {
        for(ll j=0; j<(n-i)*2; j++)
        {
            cout<<" ";
        }
        cout<<0;
        for(ll j=1; j<=i; j++)
        {
            cout<<" "<<j;
        }
        for(ll j=i-1; j>=0; j--)
        {
            cout<<" "<<j;
        }
        cout<<"\n";
    }
    for(ll i=n-1; i>=0; i--)
    {
        for(ll j=0; j<(n-i)*2; j++)
        {
            cout<<" ";
        }
        cout<<0;
        for(ll j=1; j<=i; j++)
        {
            cout<<" "<<j;
        }
        for(ll j=i-1; j>=0; j--)
        {
            cout<<" "<<j;
        }
        cout<<"\n";
    }
    return 0;
}
