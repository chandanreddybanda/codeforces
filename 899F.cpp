#include<bits/stdc++.h>
using namespace std;
typedef struct lnode
{
	char data;
	lnode *next;
}*lptr;
lptr L;
void addback(lptr &L,char k)
{
	if(L==NULL)
	{
		L=new(lnode);
		L->data=k;
		L->next=NULL;
	}
	else
	{
		lptr T,R;
		R=L;
		T=new(lnode);
		while(R->next!=NULL)
		{
			R=R->next;
		}
		T->data=k;
		R->next=T;
		T->next=NULL;
		R=T;
	}
}
void display(lptr &L)
{
	lptr K;
	K=L;
	while(K!=NULL)
	{
		cout<<K->data;
		K=K->next;
	}
}
int main()
{
	long long int n,m;
	cin>>n>>m;
	lptr l=NULL;
	for(int i=0;i<n;i++)
	{
		char ch;
		cin>>ch;
		addback(l,ch);
	}
	for(int i=0;i<m;i++)
	{
		long long int x,r;
		char a;
		cin>>x>>r>>a;
		x=x-1;r=r-1;
		r=r-x+1;
		lptr p=l,y=new lnode;
		y->data='/';
		y->next=l;
		while(x--)
		{
			y=p;
			p=p->next;
		}
		while(r--)
		{
			if(p->data==a)
			{
				p=p->next;
				if(y->next!=l)
				y->next=p;
				else
				{
					y=l;
					l=l->next;
				}
			}
			else
			{
				y=p;
				p=p->next;
			}
		}
	}
	display(l);
}
