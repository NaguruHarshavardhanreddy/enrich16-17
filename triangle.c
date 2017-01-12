# enrich16-17
#include <stdio.h>
int main()
{
    int i=1, j=0, rows;

    printf("Enter number of rows: ");
    scanf("%d",&rows);

    while( i<=rows)
    {
    	j=0;
        while( j<i)
        {
            
            if(j==0|| j==i-1)
            {
                printf("%d",1);
            }
            else
            {
                printf("%d",i);
            }
            j++;
        }
        i++;
        printf("\n");
    }
    return 0;
}
