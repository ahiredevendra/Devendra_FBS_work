#include<stdio.h>
void checkUppercase(char*);
void main()
{
	char n;
	printf("Enter Character : ");
	fflush(stdin);
	scanf("%c",&n);
	
	checkUppercase(&n);
}
void checkUppercase(char* ch)
{
	
	if(*ch >='A' && *ch<='Z')
	{
		printf("Letter is uppercase");
	}
	else if(*ch >='a' && *ch<='z')
	{
		printf("Letter is lowercase");
	}
	else
	{
		printf("Invalid input");
	}
}