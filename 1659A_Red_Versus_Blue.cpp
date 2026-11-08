#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n, r, b;
        cin>>n>>r>>b;
        ll base = b+1;
        ll seat = r/base;
        ll extra = r%base;
        for(ll i=0; i<base; i++)
        {
            for(ll j=0; j<seat; j++)
            {
                cout<<"R";
            }
            if(extra>0)
            {
                cout<<"R";
                extra--;
            }
            if(i < b)
            {
                cout<<"B";
            }
        }
        cout<<"\n";
    }
    return 0;
}
