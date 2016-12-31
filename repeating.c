# enrich16-17
#include<stdio.h>
int main()
{
   int n,k,i,h=0;
   int a[10]={1,1,2,3,3,3,4,5};
   printf("enter the element to found");
   scanf("%d",&k);
   for(i=0;i<8;i++) 
     {
       if(a[i]==k)
         {
           h++;
         }
     }
   printf("the element repeated number of times: %d \n",h);
}
