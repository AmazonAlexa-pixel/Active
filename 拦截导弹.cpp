#include<stdio.h>
#include<bits/stdc++.h>
#define ll long long
#define f(i) for(int i=1;i<=n;i++)
using namespace std;
int n,a[1111],f[1111],dp[1111];
int ans=0;
int main() {
	ios_base::sync_with_stdio(false);
	cin>>n;
	f(i) {
		cin>>a[i];
	}
	dp[0]=0x3f3f3f3f3f;
	f(i) {
		for(int j=ans;j>=0; j--) {
			if(dp[j]>=a[i]) {
				dp[j+1]=a[i];
				ans=max(ans,j+1);
				break;
			}
		}
	}
	cout<<ans<<endl;
	ans=0;
	f(i) {
		for(int j=0; j<=ans; j++) {
			if(f[j]>=a[i]) {
				f[j]=a[i];
				break;
			}
		}
		if(f[ans]<a[i]) {
			f[++ans]=a[i];
		}
	}
	cout<<ans;
	return 0;
}


