#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s;
    cin>>s;
    ll n = s.length();
    if(n == 1) cout<<"0\n";
    else
    {
        ll count = 1, sum = 0;
        for(ll i=0; i<n; i++)
        {
            sum += (s[i]-'0');
        }
        while(sum >= 10)
        {
            ll temp = sum;
            ll next_sum = 0;
            while(temp !=0)
            {
                ll rem = temp % 10;
                next_sum += rem;
                temp/=10;
            }
            sum = next_sum;
            count++;

        }
        cout<<count<<"\n";
    }

    return 0;
}
