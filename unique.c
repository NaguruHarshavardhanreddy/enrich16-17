# enrich16-17
#include <stdio.h>

int main(void) 
{
	int i,d,n,j;
	int a[]={1,3,5,7};
	int b[j];
	printf("enter the element to find");
	scanf("%d",&d);
	for(i=0;i<4;i++)
	{
	    if(a[i]==d)
	    {
	        b[j]=i;
	        j++;
	    }
	}
	for(i=0;i<j;i++)
	{
		printf("%d",b[i]);
	}
	return 0;
}
