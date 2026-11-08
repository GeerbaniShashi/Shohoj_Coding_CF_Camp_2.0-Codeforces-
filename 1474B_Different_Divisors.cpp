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
        for(ll i=5; i*i<=n; i+=6)
        {
            if(n % i == 0 || n % (i+2) == 0)
            {
                return false;
            }
        }
    }
    return true;
}

ll nextprime(ll n)
{
    while(!isprime(n))
    {
        n++;
    }
    return n;
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
        ll first = 1;
        ll second = nextprime(n + 1);
        ll third = nextprime(second + n);
        ll fourth = second * third;
        cout<<fourth<<"\n";
    }
    return 0;
}
