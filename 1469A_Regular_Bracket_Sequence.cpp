#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        ll n = s.length();
        if(n % 2 != 0 || s[n-1] == '(' || s[0] == ')') cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    return 0;
}
