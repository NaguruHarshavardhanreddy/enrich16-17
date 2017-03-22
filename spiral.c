#include<stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    int a[20][20];
    int i,j;
    int k;
    for(i=1;i<=n;i++)
    {
            if(i%2==0)
            {
            	k=n*i;
            	for(j=k;j>(k-n);j--)
				{
                printf("%d ",j);
                }
            }
            else
            {
                k=(n*i)-n+1;
                for(j=k;j<(k+n);j++)
				{
              	    printf("%d ",j);
                }
            }
        printf("\n");    
  }
    }
