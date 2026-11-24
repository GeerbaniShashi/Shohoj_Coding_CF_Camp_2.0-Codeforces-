#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    unsigned long long int n;
    cin>>n;
    unsigned long long int answer = (1LL << (n+1)) - 2;
    cout<<answer<<"\n";

    return 0;
}
