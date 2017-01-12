# enrich16-17
#include<stdio.h>
int main()
{
	int n,i,m=1,r,h=0,a;
	printf("enter the number \n");
	scanf("%d",&n);
	for(i=n+1;m!=0;i++)
	{	a=i;
	    h=0;
	    r=0;
		while(a!=0)
		{
			r=a%10;
			h=h*10+r;
			a=a/10;
		}
		if(i==h)
		{
			m=0;
		}
		
		
	}
	printf("the next palindrome is : %d\n",i-1);
}
