#include<bits/stdc++.h>
#define ll long long int
using namespace std;
struct price
{
    ll pi;
    ll tag;
};
struct inde
{
    ll cost;
    ll ind;
};
ll mycomp(inde a,inde b)
{
    return a.cost<b.cost;
}
int main()
{
    ll n;
    cin>>n;
    price pr[n+1];
    for(ll i=0;i<n;i++)
    {
        cin>>pr[i].pi;
        pr[i].tag=1;
    }
    inde a[n+1],b[n+1],c[n+1];ll x=0,y=0,z=0,l=0;
    ll p,q;
    ll k=2*n;
    while(k--)
    {
        cin>>p;
        {
            if(p==1)
            a[x++].cost=pr[l++].pi,a[x-1].ind=l-1;
            else if(p==2)
            b[y++].cost=pr[l++].pi,b[y-1].ind=l-1;
            else
            c[z++].cost=pr[l++].pi,c[z-1].ind=l-1;
        }
        if(k==n)
        l=0;
    }
    sort(a,a+x,mycomp);sort(b,b+y,mycomp);sort(c,c+z,mycomp);
    ll m;
    cin>>m;
    ll h,ai=0,bi=0,ci=0;
    while(m--)
    {
        cin>>h;
        if(h==1)
        {
            ll i=ai;
            while(i<x&&pr[a[i].ind].tag==0)
            i++;
            if(i==x)
            cout<<"-1"<<" ";
            else
            cout<<pr[a[i].ind].pi<<" ",pr[a[i].ind].tag=0;ai=i;
        }
        if(h==2)
        {
            ll i=bi;
            while(i<y&&pr[b[i].ind].tag==0)
            i++;
            if(i==y)
            cout<<"-1"<<" ";
            else
            cout<<pr[b[i].ind].pi<<" ",pr[b[i].ind].tag=0;bi=i;
        }
        if(h==3)
        {
            ll i=ci;
            while(i<z&&pr[c[i].ind].tag==0)
            i++;
            if(i==z)
            cout<<"-1"<<" ";
            else
            cout<<pr[c[i].ind].pi<<" ",pr[c[i].ind].tag=0;ci=i;
        }
    }
}
