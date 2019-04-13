#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double
#define pb push_back

ll lol(ll n){
    return (n%2==0) ? (n/2)*(n-1):(n)*((n-1)/2);
}
map<ll,ll> m;
int main(){
    ll n,ans=0;
    cin>>n;
    string s[n];
    ll a[n];
    m[0]=0;
    for(int i=0;i<n;i++){
        cin>>s[i];
        stack<char> p;
        for(int j=0;j<s[i].length();j++){
            if(s[i][j]==')'&&(!p.empty()&&p.top()=='('))
                p.pop();
            else{
                if(s[i][j]==')')
                p.push(')');
                else if(s[i][j]=='(')
                p.push('(');
           }
        }
        string x;
        while(!p.empty()){
            x+=p.top();p.pop();
        }
        ll y = 0;
        for(int j=0;j<x.length();j++){
            if(x[j]=='(')
                y++;
            else
                y--;
        }
        m[y]++;
        if(y!=0&&m[y]&&m[-y]){
            m[y]--;
            m[-y]--;
            ans++;
        }
    }
    cout<<ans + m[0]/2<<endl;
}
