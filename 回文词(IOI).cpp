#include<stdio.h>
#include<bits/stdc++.h>
#define sunning int
using namespace std;
char a[5001],b[5001];
sunning f[5001][5001];
sunning main(){
    sunning n,i,j;
    scanf("%d",&n);
    scanf("%s",a);
    sunning k=0;
    for(i=n-1;i>=0;i--)
    {
        b[k]=a[i];
        k++;
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)  
        {
            if(a[i-1]==b[j-1])
            {
                f[i][j]=f[i-1][j-1]+1;
            }
            else
            {
                f[i][j]=max(f[i-1][j],f[i][j-1]);
            }
        }
    }
    printf("%d",n-f[n][n]);
    return 0;
}

