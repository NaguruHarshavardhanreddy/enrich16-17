# enrich16-17
#include<stdio.h>
int main()
{
	int l=0,m,k,n,h,i;
	int a[20];
	printf("enter the number of elements");
	scanf("%d",&n);
	
	
	printf("enter the elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the element to search");
	scanf("%d",&k);
	h=n-1;
	m=(l+h)/2;
	if(a[m]>k)
	{
		for(i=0;i<m;i++)
		{
			if(a[i]==k)
			{
				printf("%d",i);
				break;
			}
	    }
	}
	else if(a[m]<k)
	         {
	           for(i=m+1;i<n;i++)
	            {
		          if(a[i]==k)
		           {
		            	printf("%d",i);
		           }
	            }
		    
	         }
	     
    
	else
	{
		printf("%d",m);
	}
	return 0;
}
