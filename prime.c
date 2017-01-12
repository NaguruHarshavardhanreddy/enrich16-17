# enrich16-17
#include<stdio.h>
int main()
{
   int n,i,j,flag=0;
   print("enter the number\n");
   scanf("%d",&n);
   for(i=n+1;i<=200;i++)
   {
      flag = 0;
      for(j=2;j<i;j++)
      {
         if(i%j==0)
         {
            flag = 1;
            break;
         }
       }
       if(flag==0)
       {
          printf("the next prime is %d",i);
          break;
       }
   }
   return 0;
}
        
