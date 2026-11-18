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
        string str1, str2;
        cin>>str1;
        cin>>str2;
        ll n1 = str1.length();
        ll n2 = str2.length();
        ll gcd = __gcd(n1, n2);
        ll lcm = (n1*n2)/gcd;
        string s1 = "", s2 = "";
        if(lcm == n1) s1 += str1;
        else
        {
            ll x = lcm/n1;
            for(ll i=0; i<x; i++)
            {
                s1 += str1;
            }
        }
        if(lcm == n2) s2 += str2;
        else
        {
            ll x = lcm/n2;
            for(ll i=0; i<x; i++)
            {
                s2 += str2;
            }
        }
        if(s1 == s2) cout<<s1<<"\n";
        else cout<<"-1\n";
    }
    return 0;
}
