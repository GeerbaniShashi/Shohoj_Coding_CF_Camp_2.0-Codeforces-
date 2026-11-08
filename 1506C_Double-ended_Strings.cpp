#include<bits/stdc++.h>
#define ll long long int
using namespace std;

ll longestCommonSubstring(string& s1, string& s2)
{
    ll n = s1.length();
    ll m = s2.length();
    vector<vector<ll>> dp(n +1, vector<ll> (m+1, 0));
    ll maximum = 0;
    for(ll i=1; i<=n; i++)
    {
        for(ll j=1; j<=m; j++)
        {
            if(s1[i-1] == s2[j-1])
            {
                dp[i][j] = dp[i-1][j-1] + 1;
                maximum = max(maximum, dp[i][j]);
            }
            else
            {
                dp[i][j] = 0;
            }
        }
    }
    return maximum;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
        string s1, s2;
        cin>>s1>>s2;
        ll n = s1.length();
        ll m = s2.length();
        cout<<n + m - 2*longestCommonSubstring(s1, s2)<<"\n";
    }
    return 0;
}
