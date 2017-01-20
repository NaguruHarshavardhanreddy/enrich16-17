# enrich16-17
#include <stdio.h>

int main()
{
	int a[10][10],i,j,n;
  printf("enter the number:\n");
  scanf("%d",&n);
	a[0][0]=0;
	for(i=2;i<=n;i++)
	{
	    for(j=1;j<i;j++)
	    {
	        if(j==1||j==i-1)
	        {
	            a[i][j]=1;
	        }
	        else
	        {
	            a[i][j]=((i-j)*a[i-1][j-1])+((j)*a[i-1][j]);
	        }
	        printf("%d\t",a[i][j]);
	    }
	    printf("\n");
	}
	return 0;
}
