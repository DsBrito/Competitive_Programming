#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;
int main()
{
	int i,j,k,l,m,n,a[1100];
	while(scanf("%d",&n)!=EOF)
	{
		for(i=0;i<n;i++)
		scanf("%d",&a[i]);
		int MAX=0;
		for(i=0;i<n;i++)
		{
			for(j=i+1;j<n;j++)
			{
				if(a[j]>a[j-1])
				break;
			}
			for(k=i-1;k>=0;k--)
			{
				if(a[k]>a[k+1])
				break;
			}
			MAX=max(MAX,j-k-1);
		}
		printf("%d\n",MAX);
	}
	return 0;
}