# enrich16-17
#include <stdio.h>

int main()
{
    int n,i=1,sum=0;
    scanf("%d",&n);
    while(i<=n)
    {
        sum=sum+i;
        printf("%d\t",sum);
        i++;
    }
    
	return 0;
}
