#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n,ans=INT_MIN;
int a[105][105],dp[105][105][105];
int main(){
	ios_base::sync_with_stdio(false);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			cin>>a[i][j];
			a[i][j]+=a[i][j-1];
		}
	}
	for(int i=1; i<=n; i++)
	{
		for(int j=i; j<=n; j++)
		{
			for(int k=1; k<=n; k++)
			{
				dp[i][j][k]=a[k][j]-a[k][i-1];
				if(dp[i][j][k-1]>0){
					dp[i][j][k]+=dp[i][j][k-1];
				}	
				if(dp[i][j][k]>ans){
					ans=dp[i][j][k];
				}	
			}
		}
	}
	cout<<ans<<endl;
	return 0;
}

