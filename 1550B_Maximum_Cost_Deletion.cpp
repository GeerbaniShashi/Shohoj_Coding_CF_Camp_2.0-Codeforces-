#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n, a, b;
        cin>>n>>a>>b;
        string s;
        cin>>s;
        if(b >= 0) cout<<(a*n)+(b*n)<<endl;
        else
        {
            ll count0=0, count1=0;
            ll minimum = INT_MAX;
            for(ll i=0; i<n; i++)
            {
                if(i == 0 || s[i] != s[i-1])
                {
                    if(s[i] == '0') count0++;
                    else count1++;
                }
            }
            cout<<(a*n)+((min(count0, count1)+1)*b)<<endl;
        }
    }
    return 0;
}
