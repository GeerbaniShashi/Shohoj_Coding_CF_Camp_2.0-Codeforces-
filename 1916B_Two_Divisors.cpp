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
        ll a, b;
        cin>>a>>b;
        if(b % a == 0) cout<<b*(b/a)<<"\n";
        else
        {
            ll gcd = __gcd(a, b);
            cout<<(a*b)/gcd<<"\n";
        }
    }
    return 0;
}
