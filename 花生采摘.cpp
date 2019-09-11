#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
struct node{
	int x,y,t;
}a[505];
bool cmp(node a,node b)
{
	return a.t>b.t;
}
int n,m,k,tot=0;
int main(){
	ios_base::sync_with_stdio(false);
	cin>>n>>m>>k;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++)
		{
			int ti;
			cin>>ti;
			if(ti){
				a[++tot]=node{i,j,ti};
			}
		}
	}
	sort(a+1,a+tot+1,cmp);
	if(a[1].x*2+1>k){
		cout<<0<<endl;
		return 0;
	}
	int result=k-a[1].x-1,ans=a[1].t;
	for(int i=2;i<=tot;i++){
		if(result>=abs(a[i].x-a[i-1].x)+abs(a[i].y-a[i-1].y)+abs(a[i].x)+1){
			ans+=a[i].t;
			result-=abs(a[i].x-a[i-1].x)+abs(a[i].y-a[i-1].y)+1;
		}
		else break;
	}
	cout<<ans<<endl;
	return 0;
}

