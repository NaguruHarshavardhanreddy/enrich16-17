#include<stdio.h>
int main()
{
	int a[10],b[10];
	int i,j=0,t;
	int n,max;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
			b[j]=a[i];
			j++;
		}
	}
	t=j;
	max=b[0];
	for(j=0;j<t;j++)
	{
		if(max<b[j])
		{
			max=b[j];
			break;
		}
	}
	printf("%d",max);
}
