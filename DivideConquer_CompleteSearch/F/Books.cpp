#include<bits/stdc++.h>
using namespace std;
int n,m,ans,l=1,r,a[100005];
int main()
{
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		a[i]+=a[i-1];
	}
	for(r=1;r<=n;r++)
	{
		while(a[r]-a[l-1]>m)
            l++;
		if(r-l+1>ans)
            ans=r-l+1;
	}
	cout<<ans;
	return 0;
}