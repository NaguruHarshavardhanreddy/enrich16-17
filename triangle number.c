# enrich16-17
nt main()
{
    int n;
    int i,j;
    int a[20][20]={0};
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        for (j=0;j<i;j++)
        {
            if(j==0 || j==n-1 )
            {
                a[i][j]=1;
            }
            else
            {
                a[i][j]=a[i-1][j-1]+a[i-1][j];
            }
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
