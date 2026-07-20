#include <stdio.h>
char* mystrrchr(char*, char);
void main()
{
	char str[] = "firstbit";
	
	char* x = mystrrchr(str,'i');
	if(x!=NULL)
		printf("Character found at %d index",x-str);
	else
		printf("Character not found");
}
char* mystrrchr(char* str, char ch)
{
	int x = strlen(str);
	int i= x-1;
	while(i>=0)
	{
		if(str[i]==ch)
		{
			return &str[i];
		}
		i--;
	}
	
	return NULL;
}