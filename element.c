# enrich16-17
#include <stdio.h>

int main(void) 
{
	int i,d,n;
	int a[]={1,3,5,7};
	printf("enter the element to find");
	scanf("%d",&d);
	for(i=0;i<4;i++)
	{
	    if(a[i]==d)
	    {
	        printf("%d",i);
	        break;
	    }
	}
	return 0;
}
