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
        ll n, m;
        cin>>n>>m;
        ll a[n][m];
        for(ll i=0; i<n; i++)
        {
            for(ll j=0; j<m; j++)
            {
                cin>>a[i][j];
            }
        }
        for(ll i=0; i<n; i++)
        {
            for(ll j=0; j<m; j++)
            {
                bool ok = true;
                ll maximum = INT_MIN;
                if(i-1>=0)
                {
                    maximum = max(maximum, a[i-1][j]);
                    if(a[i][j] <= a[i-1][j]) ok = false;
                }
                if(i+1<n)
                {
                    maximum = max(maximum, a[i+1][j]);
                    if(a[i][j] <= a[i+1][j]) ok = false;
                }
                if(j-1>=0)
                {
                    maximum = max(maximum, a[i][j-1]);
                    if(a[i][j] <= a[i][j-1]) ok = false;
                }
                if(j+1<m)
                {
                    maximum = max(maximum, a[i][j+1]);
                    if(a[i][j] <= a[i][j+1]) ok = false;
                }
                if(ok) cout<<maximum<<" ";
                else cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }
        // cout<<endl;
    }
    return 0;
}
