#include<bits/stdc++.h>
using namespace std;
int max(int a,int b)
{
	return(a>b)?a:b;
}
int ks(int c,int n,int w[],int v[])
{
	int i,j;
	int k[n+1][c+1];
	for(i=0;i<=n;i++)
	{
		for(j=0;j<=c;j++)
		{
			if(i==0||j==0)
				k[i][j]=0;
			else if(w[i-1]<=j)
				k[i][j]=max(v[i-1]+k[i-1][j-w[i-1]],k[i-1][j]);
			else
				k[i][j]=k[i-1][j];
		}
	}
	return k[n][c];	
}
int main()
{
	int n,c;
	cin>>n;
	int w[n],v[n];
	for(int i=0;i<n;i++)
	{
		cin>>v[i]>>w[i];
	}
	cin>>c;
	cout << ks(c,n, w, v); 
    return 0; 
}
