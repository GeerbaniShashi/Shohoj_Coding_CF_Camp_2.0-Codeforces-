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
        ll n;
        cin>>n;
        ll prime_factor = n;
        for(ll i=2; i*i <= n; i++)
        {
            if(n % i == 0)
            {
                prime_factor = i;
                break;
            }
        }
        ll a = n/prime_factor;
        ll b = n - a;
        cout<<a<<" "<<b<<"\n";
    }
    return 0;
}
