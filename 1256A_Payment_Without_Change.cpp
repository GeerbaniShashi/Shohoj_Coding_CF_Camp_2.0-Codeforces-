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
        ll a, b, n, S;
        cin>>a>>b>>n>>S;
        ll value = min(a, S/n);
        S -= (value*n);
        if(S <= b) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}
