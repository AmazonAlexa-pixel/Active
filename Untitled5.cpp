#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
const int mod=20123;
int flag[10010][110],next[10010][110],cnt[10010];
int n,m;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(false);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		for(int j=0;j<m;j++){
			cin>>flag[i][j]>>next[i][j];
		}  
	}
	for(int i=1;i<=n;i++){
		for(int j=0;j<m;j++){
			if(flag[i][j]){
				cnt[i]++;
			}
		}  
	}
	int x;
	cin>>x;
	return 0;
}

