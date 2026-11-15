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
        if(st.size() == n) cout<<"NO\n";
        else cout<<"YES\n";
    }
    return 0;
}
