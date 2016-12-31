# enrich16-17
#include<string.h>
int main()
{
     char st[20];
     int flag=0,i,l;
      printf("enter any string\n");
    char  gets(char st);
      l=strlen(st);
   
      for(i=0;i<l/2;i++)
          {
                 if(st[i]!=st[l-1-i])
                  {
                          flag=1;
                          break;
                  }
          }
         if(flag==0)
                   printf("String is Palindrom");
         else
                   printf("String is not palindrom\n");
  return 0;
}
