#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n,f[5005][5005];
char ch[5005];
int dfs(int i,int j) {
	if (f[i][j]!=0xffffffff) {
		return f[i][j];
	}

	if (ch[i-1]==ch[j-1]) {
		return f[i][j]=dfs(i+1,j-1);
	} 
	else {
		f[i][j]=min(dfs(i+1,j),dfs(i,j-1))+1;
	}
	return f[i][j];
}
int main() {
//	ios_base::sync_with_stdio(false);
	scanf("%d",&n);
	for(int i=1; i<=n; i++) {
		scanf("%c",&ch[i]);
	}
	for (int i=1; i<=n; i++) {
		for (int j=i+1; j<=n; j++)
		{
			f[i][j]=0xffffffff;
			f[i][i]=0;
		}
		
	}
	f[1][n]=dfs(1,n);
	printf("%d",f[1][n]);
	return 0;
}

