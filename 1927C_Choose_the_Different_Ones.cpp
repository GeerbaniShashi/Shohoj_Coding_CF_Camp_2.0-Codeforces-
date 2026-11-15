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
        ll n,m,k;
        cin>>n>>m>>k;
        ll a[n], b[m];
        set < ll > s1;
        set < ll > s2;
        for(ll i = 0; i < n; i++)
        {
            cin>>a[i];
            if(a[i] <= k) s1.insert(a[i]);
        }
        for(ll i = 0; i < m; i++)
        {
            cin>>b[i];
            if(b[i] <= k) s2.insert(b[i]);
        }
        ll counta = 0, countb = 0;
        bool possible = true;
        for(ll i = 1; i <= k; i++)
        {
            bool okA = s1.count(i);
            bool okB = s2.count(i);

            if(!okA && !okB)
            {
                possible = false;
                break;
            }

            if(okA && !okB)
            {
                counta++;
            }
            if(!okA && okB)
            {
                countb++;
            }
        }
        if(possible && counta <= k/2 && countb <= k/2) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}
