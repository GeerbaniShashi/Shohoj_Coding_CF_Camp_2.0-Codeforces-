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
        if(n % 2 == 0) cout<<"-1\n";
        else
        {
            cout<<1<<" ";
            for(ll i=n; i>1; i--)
            {
                cout<<i<<" ";
            }
            cout<<"\n";
        }
    }
    return 0;
}
