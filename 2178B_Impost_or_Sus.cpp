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
        string s;
        cin>>s;
        ll n = s.length();
        ll count = 0;
        if(s[0] == 'u')
        {
            s[0] = 's';
            count++;
        }
        if(s[n-1]== 'u')
        {
            s[n-1] = 's';
            count++;
        }
        for(ll i=1; i<n-1; i++)
        {
            if(s[i]=='u' && s[i-1]=='u')
            {
                s[i] = 's';
                count++;
            }
        }
        cout<<count<<"\n";
    }
    return 0;
}
