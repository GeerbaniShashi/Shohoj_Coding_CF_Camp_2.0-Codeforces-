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
        ll n;
        cin>>n;
        ll a[n];
        for(ll i=0; i<n; i++)
        {
            cin>>a[i];
        }
        ll answer = -1, count = 0;
        for(ll i=2; i<=1e18; i++)
        {
            if(isprime(i))
            {
                for(ll j=0; j<n; j++)
                {
                    if(a[j] % i != 0)
                    {
                        answer = i;
                        count = 1;
                        break;
                    }
                }
            }
            if(count == 1) break;
        }
        cout<<answer<<"\n";
    }
    return 0;
}
