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
        ll a, b;
        cin>>a>>b;
        if(b == 1) cout<<"NO\n";
        else
        {
            cout<<"YES\n";
            ll x = a;
            ll y = a*b;
            ll z = a*(b+1);
            cout<<x<<" "<<y<<" "<<z<<"\n";
        }

    }
    return 0;
}
