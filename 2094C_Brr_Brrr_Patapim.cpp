#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll a[n][n];
        for(ll i=0; i<n; i++)
        {
            for(ll j=0; j<n; j++)
            {
                cin>>a[i][j];
            }
        }
        map<ll,ll>mp;
        vector<ll>v;
        ll x[2*n];
        ll count = 0;
        for(ll i=0; i<n; i++)
        {
            for(ll j=0; j<n; j++)
            {
                mp[a[i][j]]++;
                if(mp[a[i][j]] == 1)
                {
                    v.push_back(a[i][j]);
                    x[count] = a[i][j];
                    count++;
                }
            }
        }
        sort(x, x+(2*n));
        for(ll i=0; i<2*n; i++)
        {
            if(x[i] != i+1)
            {
                cout<<i+1<<" ";
                break;
            }
        }
        for(ll i=0; i<v.size(); i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
