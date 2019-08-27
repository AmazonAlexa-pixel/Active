#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int a[1001][1001];
int f[1001][1001];	
int i,j,n,m,t,ans=0;
int main(){
	ios_base::sync_with_stdio(false);
	cin>>n>>m;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=m;j++)
		{
			cin>>t;
			if(t)
			{
				a[i][j]=1;
				f[i][j]=1+min(f[i][j-1],min(f[i-1][j],f[i-1][j-1]));
				if(ans<f[i][j])	{
					ans=f[i][j];
				}
			}
		}
	}
	cout<<ans;
	return 0;
}

