#include<stdio.h>
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int hei[101],ldp[101],rdp[101];
int main() {
	int n;
	while (scanf("%d",&n)!=EOF) {
		if(n==-1) break;
		int i;
		memset(ldp,0,sizeof(ldp));
		for (i=1; i<=n; i++) {
			scanf("%d",&hei[i]);
			ldp[i]=1;
		}
		
	}
	return 0;
}
