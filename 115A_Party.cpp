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
    ll a[n+1];
    for(ll i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    ll maximum_depth = 0;
    for(ll i=1; i<=n; i++)
    {
        ll current = i;
        ll depth = 0;
        while(current != -1)
        {
            depth++;
            current = a[current];
        }
        maximum_depth = max(maximum_depth, depth);
    }
    cout<<maximum_depth<<"\n";

    return 0;
}
