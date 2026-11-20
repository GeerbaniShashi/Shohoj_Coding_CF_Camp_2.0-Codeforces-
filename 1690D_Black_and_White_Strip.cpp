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
        ll count_w = 0;
        for(ll i = 0; i < k; i++)
        {
            if(s[i] == 'W') count_w++;
        }
        ll minimum = count_w;
        for(ll i = k; i < n; i++)
        {
            if(s[i] == 'W') count_w++;
            if(s[i-k] == 'W') count_w--;
            minimum = min(minimum, count_w);
        }
        cout<<minimum<<"\n";
    }
    return 0;
}
