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
        ll n, k;
        cin>>n>>k;
        string s;
        cin>>s;
        ll count0 = 0, count1 = 0;
        for(ll i=0; i<n; i++)
        {
            if(s[i]=='0') count0++;
            else count1++;
        }
        ll x = n/2;
        ll bad = x - k;
        ll good = k;
        if(count0 >= bad && count1 >= bad&& ((count0-bad)/2)+((count1-bad)/2) == good && (count0-bad)%2==0 && (count1-bad)%2==0)
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }
    }
    return 0;
}
