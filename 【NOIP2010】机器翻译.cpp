#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
vector<int>vt;
int m,n,ans=0,tot=0;
int a[1005],c[1005];
bool b[1005];
int main(){
	ios_base::sync_with_stdio(false);
//	cin.tie(false);
	cin>>m>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		if(!b[a[i]]){
			ans++;
			b[c[++tot]=a[i]]=true;
			if(tot>m){
				b[c[tot-m]]=false;
			} 
		}
	}
	cout<<ans<<endl;
	return 0;
}

