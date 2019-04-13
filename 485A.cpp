#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
int main(){
	ll n,sum=0,ma=INT_MIN,mi=INT_MAX;
	cin>>n;
	pair<string,string> l[6];
	l[0].first="purple";l[0].second="Power";
	l[1].first="yellow";l[1].second="Mind";
	l[2].first="red";l[2].second="Reality";
	l[3].first="orange";l[3].second="Soul";
	l[4].first="blue";l[4].second="Space";
	l[5].first="green";l[5].second="Time";
	string s;
	for(int i=0;i<n;i++)
	{
		cin>>s;
		for(int i=0;i<6;i++)
{
	if(l[i].first==s)
	l[i].first="-1";
	}	}
	cout<<6-n<<endl;
	for(int i=0;i<6;i++){
		if(l[i].first!="-1")
		cout<<l[i].second<<endl;
	}
}

