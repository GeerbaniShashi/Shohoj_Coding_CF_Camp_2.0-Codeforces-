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
        string s;
        cin>>s;
        ll hyphen = 0, underscore = 0;
        for(ll i=0; i<n; i++)
        {
            if(s[i] == '_') underscore++;
            else hyphen++;
        }
        if(n < 3 || hyphen < 2 || underscore < 1) cout<<0<<endl;
        else
        {
            ll x = hyphen/2;
            cout<<x*underscore*(hyphen-x)<<endl;
        }
    }
    return 0;
}
