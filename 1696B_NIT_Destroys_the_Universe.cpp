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
        set<ll>st;
        for(ll i=0; i<n; i++)
        {
            cin>>a[i];
            st.insert(a[i]);
        }
        ll l=0, r=0;
        for(ll i=0; i<n; i++)
        {
            if(a[i]!=0)
            {
                l = i;
                break;
            }
        }
        for(ll i=n-1; i>=0; i--)
        {
            if(a[i]!=0)
            {
                r = i;
                break;
            }
        }
        ll ok = false;
        for(ll i=l; i<=r; i++)
        {
            if(a[i]==0)
            {
                ok = true;
                break;
            }
        }
        if(st.size()==1&&a[0]==0) cout<<0<<"\n";
        else if(ok) cout<<2<<"\n";
        else cout<<1<<"\n";
    }
    return 0;
}
