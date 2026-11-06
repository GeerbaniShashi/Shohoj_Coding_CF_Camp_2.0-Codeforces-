#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n, m;
    cin>>n>>m;
    ll a[n], b[m];
    for(ll i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(ll i=0; i<m; i++)
    {
        cin>>b[i];
    }
    ll index = 0, sum = 0;
    for(ll i=0; i<m; i++)
    {
        ll current_sum = b[i];
        while(current_sum > sum + a[index])
        {
            sum = sum + a[index];
            index++;
        }
        cout<<index+1<<" "<<current_sum - sum<<"\n";
    }
    return 0;
}
