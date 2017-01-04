#include<stdio.h>
#include<string.h>
void generateSquare(int n)
{
    int magicSquare[n][n];

    memset(magicSquare, 0, sizeof(magicSquare))
    int i = n/2;
    int j = n-1;

  
    for (int num=1; num <= n*n; )
    {
        if (i==-1 && j==n)
        {
            j = n-2;
            i = 0;
        }
        else
        {
         
            if (j == n)
                j = 0;
            
            if (i < 0)
                i=n-1;
        }
        if (magicSquare[i][j]) //2nd condition
        {
            j -= 2;
            i++;
            continue;
        }
        else
            magicSquare[i][j] = num++; //set number

        j++;  i--; //1st condition
    }
    printf("The Magic Square for n=%d:\nSum of each row or column %d:\n\n",
            n, n*(n*n+1)/2);
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
            printf("%3d ", magicSquare[i][j]);
        printf("\n");
    }
}


int main()
{
    int n = 7; // Works only when n is odd
    generateSquare (n);
    return 0;
}
