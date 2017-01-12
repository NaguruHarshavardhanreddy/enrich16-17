# enrich16-17
#include<stdio.h>
#include<conio.h>
int main() {
    int row, space, rows, star=0;
    printf("Enter the number of rows in pyramid\n");
    scanf("%d",&rows);

    for(row = 1;row <= rows; row++)
	{
    
        for(space = 1; space <= rows-row; space++)
		 {
           printf("  ");
         }
        while(star != (2*row - 1)) 
		{
            printf("* ");
            star++;;
        }
        star=0;
        printf("\n");
    }
    getch();
    return 0;
}
