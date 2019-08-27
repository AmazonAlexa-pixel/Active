#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
int n,m,x,y,dp[25][25],a[25][25];
int dx[10]={0,2,1,-1,-2,-2,-1,1,2};
int dy[10]={0,1,2,2,1,-1,-2,-2,-1};
void init()
{
	for(int i=0;i<9;i++)
	{
		int ix=dx[i]+x;
		int iy=dy[i]+y;
		if(ix>=0 && ix<=n && iy>=0 && iy<=m)
		{
			a[ix][iy]=1;
		}
	}
}
int main(){
	ios_base::sync_with_stdio(false);
	cin>>n>>m>>x>>y;
//	memset(dp,0,sizeof(dp));
	init();
//	dp[0][0]=1;
	
	for(int i=0;i<=n;i++){
		for(int j=0;j<=m;j++)
		{
			if(i==0&&j==0)
			{
				dp[i][j]=1;
			}
			if(i-1>=0&&!a[i-1][j])
			{
				dp[i][j]+=dp[i-1][j];
			}
			if(j-1>=0&&!a[i][j-1])
			{
				dp[i][j]+=dp[i][j-1];
			}
		}
	}
	cout<<dp[n][m]<<endl;
	return 0;
} 
