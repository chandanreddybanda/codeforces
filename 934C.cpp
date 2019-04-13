#include <bits/stdc++.h>
using namespace std;
const int MAX = 2000;
const int inf = 2e9;
int dp[MAX][MAX];
  
void initialize()
{
    for (int i = 0; i < MAX; i++)
        for (int j = 0; j < MAX; j++)
            dp[i][j] = -1;
}
  
int solve(int arr[], int i, int k)
{
    if (dp[i][k] != -1)
        return dp[i][k]; 
    if (i < 0)
        return inf;
    if (k == 1) {
        int ans = inf;
        for (int j = 0; j <= i; j++)
            ans = min(ans, arr[j]);
        return ans;
    }
    int ans = inf;
    for (int j = 0; j < i; j++)
        if (arr[i] >= arr[j])
            ans = min(ans, min(solve(arr, j, k),
                      solve(arr, j, k - 1) + arr[i]));
        else{
            ans = min(ans, solve(arr, j, k));
        }
  
    dp[i][k] = ans;
    return dp[i][k];
}
int rvereseArray(int arr[], int start, int end)
{
    int temp;
    while (start < end)
    {
        temp = arr[start];   
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }   
}
int main()
{
    initialize();
    int n,cnt=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    int k ;
    for(int i=0;i<n-1;i++)
    {
    	for(int j=i+1;j<n;j++)
    	{
    		rvereseArray(a,i,j);
    		k=n;
    		while(k>0)
    		{
    			if(solve(a,n-1,k)!=-1)
    			{cnt=max(cnt,k);break;}
    			k--;
    			initialize();
			}
			rvereseArray(a,i,j);
		}
	}
	cout<<cnt;
}
