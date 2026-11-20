#include<bits/stdc++.h>
#define ll long long int
using namespace std;

bool check(ll n, ll m)
{
    if(n == m) return true;
    else if(n < m || n % 3 != 0) return false;
    else return (check(n/3, m) || check(n/3 * 2, m));
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
        ll n, m;
        cin>>n>>m;
        if(check(n, m)) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}
