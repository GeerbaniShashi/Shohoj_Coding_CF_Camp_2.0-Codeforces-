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
        ll n,m;
        cin>>n>>m;
        ll a[n][m];
        for(ll i=0; i<n; i++)
        {
            for(ll j=0; j<m; j++)
            {
                cin>>a[i][j];
            }
        }
        ll maximum = INT_MIN;
        for(ll r=0; r<n; r++)
        {
            for(ll c = 0; c<m; c++)
            {
                ll sum = a[r][c];
                for(ll i=r-1, j=c-1; i>=0 && j>= 0; i--, j--)
                {
                    sum += a[i][j];
                }
                for(ll i=r-1, j=c+1; i>=0 && j<m; i--, j++)
                {
                    sum += a[i][j];
                }
                for(ll i=r+1, j=c-1; i<n && j>= 0; i++, j--)
                {
                    sum += a[i][j];
                }
                for(ll i=r+1, j=c+1; i<n && j<m; i++, j++)
                {
                    sum += a[i][j];
                }
                maximum = max(maximum, sum);
            }
        }
        cout<<maximum<<"\n";
    }
    return 0;
}
