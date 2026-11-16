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
        ll a, b, x_king, y_king, x_queen, y_queen;
        cin>>a>>b>>x_king>>y_king>>x_queen>>y_queen;
        ll dx[8] = {a, a, -a, -a, b, b, -b, -b};
        ll dy[8] = {b, -b, b, -b, a, -a, a, -a};
        set<pair<ll, ll>>king_move, queen_move;
        for(ll i=0; i<8; i++)
        {
            king_move.insert({x_king+dx[i], y_king+dy[i]});
            queen_move.insert({x_queen+dx[i], y_queen+dy[i]});
        }
        ll count = 0;
        for(auto position : king_move)
        {
            if(queen_move.count(position))
            {
                count++;
            }
        }
        cout<<count<<"\n";
    }
    return 0;
}
