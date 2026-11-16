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
        ll n, k;
        cin>>n>>k;
        ll a[n];
        for(ll i=0; i<n; i++)
        {
            cin>>a[i];
        }
        sort(a, a+n);
        ll count = 0, left = 0, right = n - 1;
        while(left < right)
        {
            ll answer = a[left] + a[right];
            if(answer == k)
            {
                count++;
                left++;
                right--;
            }
            else if(answer < k)
            {
                left++;
            }
            else
            {
                right--;
            }
        }
        cout<<count<<"\n";
    }
    return 0;
}
