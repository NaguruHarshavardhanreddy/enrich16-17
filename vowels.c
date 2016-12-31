# enrich16-17
#include<stdio.h>
#include<string.h>
int main()
{
 int len=0,i,j=0;
 char str[40],new_str[30];
 printf("Enter any string : ");
 gets(str);
 for(i=0; i<=strlen(str); i++)
 {
   if((str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u') ||(str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U' || str[i]==' '))
   {
     str[i]=' ';
   }
   else
   {
     len++;
     new_str[j++]=str[i];
   }
 }
 new_str[j]='\0';
 printf("New vowel less string : %s",new_str);
 printf("\nLength of new string = %d",len);
 return 0;
}
