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
        ll n, m, k;
        cin>>n>>m>>k;

        for(ll i=n; i>m; i--)
        {
            cout<<i<<" ";
        }
        for(ll i=1; i<=m; i++)
        {
            cout<<i<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
