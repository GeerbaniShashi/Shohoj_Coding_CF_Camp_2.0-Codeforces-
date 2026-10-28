#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll a[n];
        for(ll i=0; i<n; i++)
        {
            cin>>a[i];
        }
        if(n == 1) cout<<0<<endl;
        else
        {
            ll maximum = a[n-1] - a[0];
            for(ll i=1; i<n; i++)
            {
                maximum = max(maximum, a[i] - a[0]);
            }
            for(ll i=0; i<n-1; i++)
            {
                maximum = max(maximum, a[n-1] - a[i]);
            }
            for(ll i=0; i<n-1; i++)
            {
                maximum = max(maximum, a[i] - a[i+1]);
            }
            cout<<maximum<<endl;
        }
    }
    return 0;
}
