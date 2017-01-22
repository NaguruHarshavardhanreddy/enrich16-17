# enrich16-17
#include <stdio.h>

int main()
{
    int i,j,length,index,s,n,a[20];
    printf("enter the number of elements: \n" );
    scanf("%d",&length);
    printf("Enter the elements : ");
    for(i=0;i<length;i++)
    {
    	scanf("%d",&a[i]);
    }
    s=0;
    index=1;
    printf("The subsets are :\n");
    for(i=0;i<length;i++)
    {
    	printf("%d \n",a[i]);
    }
    for(n=0;n!=length;n++)
    {
    	for( ;index!=length;index++)
    	{
	    	for(i=index;i<length;i++)
	    	{
	    		for(j=s;j<index;j++)
	    		{
		    		printf("%d,",a[j]);
		    	}
		    	
		    	printf("%d \n",a[i]);
	    	}
	    	
	    }
	    
		  s++;
	    index=s+1;	
			
    }
    
}
