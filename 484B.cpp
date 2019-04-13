#include<bits/stdc++.h>
#define ll long long int
#define PI 3.1415926535
using namespace std;
ll cnt=0;
set<char>se;
map<string ,ll >m;
ll gcd(ll x,ll y)
{
    if(x==0)
        return y;
    return gcd(y%x,x);
}
int maxModValue(ll arr[], ll n)
{
    ll ans=0;
    sort(arr, arr+n);
    for (ll j=n-2; j>=0; --j)
    {
        if(ans >= arr[j])
            break;
        if(arr[j] == arr[j+1])
            continue;
 
        for (ll i=2*arr[j]; i <= arr[n-1] + arr[j]; i += arr[j])
        {
            int ind = lower_bound(arr, arr+n, i) - arr;
            ans = max(ans, arr[ind-1] % arr[j]);
        }
    }
    return ans;
}
int main()
{
    ll n;
    cin>>n;
    ll a[n];
    for(ll i=0;i<n;i++)
    cin>>a[i];
    cout<<maxModValue(a,n);
}

