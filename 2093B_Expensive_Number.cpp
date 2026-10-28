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
        ll index = 0, count = 0;
        ll n = s.length();
        for(ll i=n-1; i>=0; i--)
        {
            ll x = s[i] - '0';
            if(x >= 1)
            {
                index = i;
                break;
            }
            else
            {
                count++;
            }
        }
        for(ll i=0; i<index; i++)
        {
            if(s[i] >= '1' && s[i] <= '9') count++;
        }
        cout<<count<<endl;
    }
    return 0;
}
