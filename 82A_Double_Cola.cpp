#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s[5] = {"Sheldon", "Leonard", "Penny", "Rajesh", "Howard"};
    ll n;
    cin>>n;
    ll r = 1;

    while(n > 5*r)
    {
        n -= 5*r;
        r *= 2;
    }

    ll index = (n-1)/r;

    cout<<s[index]<<"\n";

    return 0;
}
