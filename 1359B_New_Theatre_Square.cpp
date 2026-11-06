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
        ll n,m,x,y;
        cin>>n>>m>>x>>y;
        char ch[n][m];
        for(ll i=0; i<n; i++)
        {
            for(ll j=0; j<m; j++)
            {
                cin>>ch[i][j];
            }
        }
        ll sum1 = 0, sum2 = 0;
        for(ll i=0; i<n; i++)
        {
            for(ll j=0; j<m; j++)
            {
                if(ch[i][j]=='.' && ch[i][j+1] == '.' && j+1 < m)
                {
                    sum1 += y;
                    j++;
                }
                else if(ch[i][j] == '.')
                {
                    sum1 += x;
                }
            }
        }
        for(ll i=0; i<n; i++)
        {
            for(ll j=0; j<m; j++)
            {
                if(ch[i][j] == '.') sum2 += x;
            }
        }
        cout<<min(sum1, sum2)<<"\n";
    }
    return 0;
}
