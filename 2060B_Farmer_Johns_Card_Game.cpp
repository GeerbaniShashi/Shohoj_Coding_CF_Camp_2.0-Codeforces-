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
        ll n, m;
        cin>>n>>m;
        vector<vector<ll>>v(n, vector<ll>(m,0));
        for(ll i=0; i<n; i++)
        {
            for(ll j=0; j<m; j++)
            {
                cin>>v[i][j];
            }
        }
        if(n == 1)
        {
            cout<<1<<"\n";
            continue;
        }
        bool ok = false;
        for(ll i=0; i<n; i++)
        {
            ok = false;
            sort(v[i].begin(), v[i].end());
            for(ll j=1; j<m; j++)
            {
                if(v[i][j] - v[i][j-1] != n)
                {
                    ok = true;
                    break;
                }
            }
            if(ok) break;
        }
        if(ok) cout<<"-1\n";
        else
        {
            vector<pair<ll, ll>>answer;
            for(ll i=0; i<n; i++)
            {
                answer.push_back({v[i][0], i+1});
            }
            sort(answer.begin(), answer.end());
            for(ll i=0; i<n; i++)
            {
                cout<<answer[i].second<<" ";
            }
            cout<<"\n";
        }
    }
    return 0;
}
