# enrich16-17
int main(void) 
{
    int n,i=0,j,count,odd=0;
    char str[20],nhv;
    printf("Enter the string\n");
    scanf("%s",str);
    n=strlen(str);
    while(i<n)
    {
        if(str[i]!='\0')
        {
            count=1;
            nhv=str[i];
            for(j=i+1;j<n;j++)
            {
                if(nhv==str[j])
                {
                    count++;
                    str[j]='\0';
                }
            }
            if(count%2 != 0)
            {
                odd++;
            }
             if(odd==2)
            {
                printf("false \n");
	        return 0;
            }
        }
    i++;
    }
    printf("true \n");
    return 0;
}
