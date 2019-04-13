#include<bits/stdc++.h>
#include<sstream>
using namespace std;
int main()
{
	int n,k;
	cin>>n>>k;
	string s;
	stack<int> sta;sta.push(0);
	for(int i=0;i<k;i++)
	{
		cin>>s;
		if(s[0]=='u')
		{
			int x;
			cin>>x;
			for(int i=0;i<x;i++)
			sta.pop();
		}
		else
		{
			int a=0;
			stringstream geek(s);
			geek>>a;
			sta.push((n+(a%n)+sta.top())%n);
		}
	}
	cout<<sta.top();
}
