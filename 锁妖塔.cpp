#include<bits/stdc++.h>
#define sunning INT_MAX
using namespace std;
int n,a[1000005],mint,i; 
int main(){
//	system("title Xtech Design");
//	system("color 2d");
	scanf("%d",&n);
	n++;
	for(i=1;i<=n;i++)
	{
		if(i<n)
		{
			scanf("%d",&mint);
		}
		else
		{
			mint=0;
		}
		if(i-1>=0)
		{
			a[i]=a[i-1];
		}
		if(i-2>=0)
		{
			a[i]=min(a[i],a[i-2]);
		}
		if(i-3>=0)
		{
			a[i]=min(a[i],a[i-3]);
		}
		a[i]+=mint;
	}
	printf("%d\n",a[n]);
	return 0;
}
