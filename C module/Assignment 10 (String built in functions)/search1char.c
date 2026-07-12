#include<stdio.h>
void main()
{
	char str[30];
	printf("Enter string : ");
	scanf("%s",str);
	
	char n;
	printf("Enter n : ");
	fflush(stdin);
	scanf("%c",&n);
	printf("%s",strrchr(str,n));
}