#include <stdio.h>
#include<stdlib.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) 
{
	int i=26;
	int j;
	for(j=0;j<i;j++)
		printf("%c",j+65);
	    printf("\n"); 
	for(j=0;j<i;j++)
	    printf("%c",j+97);
	return 0;
}
