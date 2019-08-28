#include<stdio.h>
#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll n,m,p;
ll Xpower(ll x,ll y,ll z){
	ll ans = 1,basic=x;
	while(y){
		if(y&1){
			ans=(ans*basic)%z;
		}
		basic=(basic*basic)%z;
		y>>=1;
	}
	return ans;
}
ll C(ll a,ll b){
	if(a<b){
		return 0;
	}
	if(a==b){
		return 1;
	}
	if(b>a-b){
		b=a-b;
	}
	ll A=1,B=1;
	for(ll i=0; i<b; ++i){
		A=(A*(a-i))%p;
		B=(B*(b-i))%p;
	}
	return (A*Xpower(B,p-2,p))%p;
}
ll Lucas(ll n,ll m){
	if(m==0){
		return 1;
	}
	return C(n%p,m%p)*Lucas(n/p,m/p)%p;
}
int main(){
	ios_base::sync_with_stdio(false);
	cin>>n>>m>>p;
	cout<<Lucas(n,m);
	return 0;
}

