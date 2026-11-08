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
        ll n, k;
        cin>>n>>k;
        ll a[n];
        bool ok = false;
        ll even = 0;
        for(ll i=0; i<n; i++)
        {
            cin>>a[i];
            if(a[i]%k==0) ok = true;
            if(a[i]%2==0) even++;
        }
        if(ok)
        {
            cout<<0<<"\n";
        }
        else if(k == 4)
        {
            ll answer = 0;
            if(even >= 2) answer = 0;
            else if(even == 1) answer = 1;
            else answer = 2;
            ll b[n];
            for(ll i=0; i<n; i++)
            {
                ll x = a[i]%k;
                ll y = k - x;
                b[i] = y;
            }
            sort(b, b+n);
            cout<<min(b[0], answer)<<"\n";
        }
        else
        {
            ll b[n];
            for(ll i=0; i<n; i++)
            {
                ll x = a[i]%k;
                ll y = k - x;
                b[i] = y;
            }
            sort(b, b+n);
            cout<<b[0]<<"\n";
        }
    }
    return 0;
}
