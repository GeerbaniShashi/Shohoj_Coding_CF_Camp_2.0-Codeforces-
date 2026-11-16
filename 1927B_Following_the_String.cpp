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
        for(ll i=0; i<n; i++)
        {
            cin>>a[i];
        }
        vector<ll>v(26);
        string str = "";
        for(ll i=0; i<n; i++)
        {
            for(ll j=0; j<26; j++)
            {
                if(v[j]==a[i])
                {
                    v[j]++;
                    str += (char)('a' + j);
                    break;
                }
            }
        }
        cout<<str<<"\n";
    }
    return 0;
}
