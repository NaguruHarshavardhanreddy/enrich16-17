# enrich16-17
#include <stdio.h>
#include<unistd.h>
#include<stdlib.h>
int main(void) {
    int i=0,j,k;
	char s[12]={'H','A','P','P','Y',' ','P','O','N','G','A','L'};
	while(s[i]!='\0')
	{
	    printf("%c",s[i]);
	    
	    sleep(1);
	    i++;
	}
	
	return 0;
}
