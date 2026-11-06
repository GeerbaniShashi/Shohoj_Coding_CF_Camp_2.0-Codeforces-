#include<bits/stdc++.h>
#define ll long long int
using namespace std;

bool isprime(ll n)
{
    if(n == 1) return false;
    else if(n == 2 || n == 3) return true;
    else if(n % 2 == 0 || n % 3 == 0) return false;
    else
    {
        for(ll i=5; i*i <= n; i+=6)
        {
            if(n % i == 0 || n % (i+2) == 0)
            {
                return false;
            }
        }
    }
    return true;
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
        ll x, k;
        cin>>x>>k;
        if(k == 1)
        {
            if(isprime(x)) cout<<"YES\n";
            else cout<<"NO\n";
        }
        else
        {
            if(x == 1 && k == 2)
            {
                cout<<"YES\n";
            }
            else cout<<"NO\n";
        }
    }
    return 0;
}
