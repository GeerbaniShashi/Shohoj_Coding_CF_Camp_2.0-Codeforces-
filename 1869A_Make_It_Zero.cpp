#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
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
        if(n % 2 == 0)
        {
            cout<<2<<endl;
            cout<<1<<" "<<n<<endl;
            cout<<1<<" "<<n<<endl;
        }
        else
        {
            cout<<4<<endl;
            cout<<1<<" "<<n-1<<endl;
            cout<<1<<" "<<n-1<<endl;
            cout<<n-1<<" "<<n<<endl;
            cout<<n-1<<" "<<n<<endl;
        }
    }
    return 0;
}
