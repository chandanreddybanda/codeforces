#include<bits/stdc++.h>
using namespace std;
char c[10000000];long long int end=0;
void fun(int n)
{
	if(n==0)
	{
		string s="What are you doing at the end of the world? Are you busy? Will you save us?";
		for(int i=0;i<s.length();i++)
		{
			c[i+end]=s[i];
		}
		end=end+s.length();
	}
	else 
	{
		string s1="What are you doing while sending ";
		for(int i=0;i<s1.length();i++)
		{
			c[i+end]=s1[i];
		}
		end=end+s1.length();
		c[end++]='"';
		fun(n-1);
		c[end++]='"';
		string s2=" Are you busy? Will you send ";
		for(int i=0;i<s2.length();i++)
		{
			c[i+end]=s2[i];
		}
		end=end+s2.length();
		c[end++]='"';
		fun(n-1);
		c[end++]='"';
		c[end++]='?';
	}
}
int main()
{
	int q;
	cin>>q;
	for(int i=0;i<q;i++)
	{
		int n,k;
		cin>>n>>k;
		fun(n);
		if(end<k)
		cout<<".";
		else
		{
			cout<<c[k-1];
		}
		end=0;
	}
}
