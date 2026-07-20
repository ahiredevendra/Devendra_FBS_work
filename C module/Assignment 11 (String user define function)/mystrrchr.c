#include <stdio.h>
char* mystrrchr(char*, char);
void main()
{
	char str[] = "firstbit";
	
	char* x = mystrrchr(str,'t');
	if(x!=NULL)
		printf("Character found at %d index",x-str);
	else
		printf("Character not found");
}
char* mystrrchr(char* str, char ch)
{
	int i=0;
	int flag = 0;
	while(str[i]!='\0')
	{
		if(str[i]==ch)
		{
			return &str[i];
			flag = 1;
		}
		i++;
	}
	if(flag!=0)
		return NULL;
}