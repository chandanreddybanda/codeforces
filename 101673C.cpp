#include<bits/stdc++.h>
using namespace std;
char rot(char ch,long long int n)
{
	return char(65+((n%26)+int(ch)%65)%26);
}
int main()
{
	string s;
	cin>>s;
	long long int mid=(s.length()/2),s1=0,s2=0;
	for(long long int i=0;i<mid;i++)
	s1=s1+(int(s[i])%65);
	for(long long int i=mid;i<s.length();i++)
	s2=s2+(int(s[i])%65);
	for(long long int i=0;i<mid;i++)
	s[i]=rot(s[i],s1);
	for(long long int i=mid;i<s.length();i++)
	s[i]=rot(s[i],s2);
	for(long long int i=0;i<mid;i++)
	{
		s[i]=rot(s[i],int(s[i+mid])%65);
		cout<<s[i];
	}
}
