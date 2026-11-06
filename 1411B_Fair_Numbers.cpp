#include<bits/stdc++.h>
#define ll long long int
using namespace std;

bool isFairNumber(ll n)
{
    ll temp = n;
    while(temp != 0)
    {
        ll rem = temp % 10;
        if(rem != 0 && n % rem != 0)
        {
            return false;
        }
        temp/=10;
    }
    return true;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        while(!isFairNumber(n))
        {
            n++;
        }
        cout<<n<<"\n";
    }

    return 0;
}
