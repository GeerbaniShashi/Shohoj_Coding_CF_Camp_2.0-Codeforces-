#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n;
    cin>>n;
    ll a[n];
    for(ll i=0; i<n; i++)
    {
        cin>>a[i];
    }
    ll count25 = 0, count50 = 0;
    bool ok = false;
    for(ll i=0; i<n; i++)
    {
        if(a[i] == 25)
        {
            count25++;
        }
        else if(a[i] == 50)
        {
            count50++;
            if(count25 >= 1)
            {
                count25--;
            }
            else
            {
                ok = true;
                break;
            }
        }
        else if(a[i] == 100)
        {
            if(count50 >= 1 && count25 >= 1)
            {
                count50--;
                count25--;
            }
            else if(count25 >= 3)
            {
                count25-=3;
            }
            else
            {
                ok = true;
                break;
            }
        }
    }
    if(!ok) cout<<"YES\n";
    else cout<<"NO\n";
    return 0;
}
