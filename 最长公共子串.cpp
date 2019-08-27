#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int lenX,lenY,x[1005],y[1005],f[1005][1005],ans=INT_MIN,i,j;
int main() {
	ios_base::sync_with_stdio(false);
	cin>>lenX>>lenY;
	for(i=1; i<=lenX; i++)cin>>x[i];
	for(j=1; j<=lenY; j++)cin>>y[j];
	for(i=1; i<=lenX; i++){
		for(j=1; j<=lenY; j++){
			if(x[i]==y[j]){
				f[i][j]=f[i-1][j-1]+1;				
			}
			else {
				f[i][j]=0;						
			}
		}
	}
	for(i=1;i<=lenX;i++)
	{
		for(j=1;j<=lenY;j++)
		{
			ans=max(ans,f[i][j]);
		}
	}
	cout<<ans<<endl;
	return 0;
}

