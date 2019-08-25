#include<stdio.h>
#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll n,m,x,k,t,r;
ll Xpower(ll a,ll b,ll c){
	ll ans=1;
	a%=c;
	while(b>0){
		if(b&1)
		{
			ans=(ans*a)%c;
		}
		b=b>>1;
		a=(a*a)%c;
	}
	return ans;	
} 
int main(){
	ios_base::sync_with_stdio(false);
	cin>>n>>m>>k>>x;
	t=Xpower(10,k,n);
	r=((t*m)%n+x)%n;
	cout<<r<<endl;
    return 0;
}

