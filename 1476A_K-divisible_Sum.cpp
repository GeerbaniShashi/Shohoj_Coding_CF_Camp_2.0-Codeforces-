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
        ll n, k;
        cin>>n>>k;
        if(n >= k)
        {
            if(n % k == 0) cout<<1<<endl;
            else cout<<2<<endl;
        }
        else
        {
            cout<<(ll)ceil((double)k / (double)n)<<endl;
        }
    }
    return 0;
}
