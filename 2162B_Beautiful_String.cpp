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
        ll count = 0;
        for(ll i=0; i<n; i++)
        {
            if(s[i] == '0') count++;
        }
        cout<<count<<"\n";
        for(ll i=0; i<n; i++)
        {
            if(s[i]=='0') cout<<i+1<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
