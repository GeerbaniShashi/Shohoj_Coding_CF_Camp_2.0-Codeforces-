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
        ll a, b, n;
        cin>>a>>b>>n;
        if(a == b || b*n <= a) cout<<"1\n";
        else cout<<"2\n";
    }
    return 0;
}
