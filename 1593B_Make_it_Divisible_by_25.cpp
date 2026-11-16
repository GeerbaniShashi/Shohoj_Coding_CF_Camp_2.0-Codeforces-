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
        string s;
        cin>>s;
        ll n = s.length();
        ll answer = 0;
        for(ll i=0; i<n-1; i++)
        {
            for(ll j=i+1; j<n; j++)
            {
                if(((s[i]-'0')*10 + (s[j]-'0'))%25==0) answer = n - i - 2;
            }
        }
        cout<<answer<<"\n";
    }
    return 0;
}
