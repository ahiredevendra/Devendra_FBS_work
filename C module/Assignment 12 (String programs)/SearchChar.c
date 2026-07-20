#include<stdio.h>
char* mystrchr(char*, char);
void main()
{
	char str[10];
	printf("Enter a string : ");
	scanf("%s",str);
	
	fflush(stdin);
	char ch;
	printf("Enter character you want to search : ");
	scanf("%c",&ch);
	
	char* x = mystrchr(str,ch);
	
	if(x!=NULL)
		printf("Character found at %d index",x-str);
	else
		printf("Character not found");
}
char* mystrchr(char* str, char ch)
{
	int i=0;
	int flag = 0;
	while(str[i]!='\0')
	{
		if(str[i]==ch)
		{
			flag = 1;
			return &str[i];
		}
		i++;
	}
	if(flag!=0)
		return NULL;
}