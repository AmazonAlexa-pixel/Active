#include<stdio.h>
#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll l,r,ans=-0x3f3f3f3f3f3f3f3f;
ll fun(ll x)
{
	ll cnt=0;
	while(x){
		cnt++;
		x>>=1;
	}
	return cnt;
}
ll func(ll l,ll r)
{
	ll a=fun(l),b=fun(r);
	if(a!=b)
	{
		return (1LL<<b)-1;
	}
	ll ans= func(l&((1LL<<(a-1))-1),r&(((1LL<<(b-1)))-1));
	return ans;
}
int main() {
	ios_base::sync_with_stdio(false);
	/*cin>>l>>r;
	for(ll i=l;i<=r;i++)
	{
		for(ll j=l;j<=r;j++)
		{
			ans=max(ans,i^j);
		}
	}
	cout<<ans<<endl;*/
	cin>>l>>r;
	cout<<func(l,r)<<endl;
	return 0;
}

