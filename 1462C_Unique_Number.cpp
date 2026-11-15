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
        if(n <= 9) cout<<n<<"\n";
        else if(n > 45) cout<<"-1\n";
        else
        {
            vector<ll>v;
            for(ll i=9; i>=1; i--)
            {
                if(n>=i)
                {
                    v.push_back(i);
                    n-=i;
                }
            }
            sort(v.begin(), v.end());
            for(ll i=0; i<v.size(); i++)
            {
                cout<<v[i];
            }
            cout<<"\n";
        }
    }
    return 0;
}
