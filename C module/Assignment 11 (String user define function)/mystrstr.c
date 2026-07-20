#include<stdio.h>
char* mystrstr(char*, char*);
void main()
{
	char str1[20];
	printf("Enter string : ");
	scanf("%s",str1);
	
	char str2[19];
	printf("Enter substring : ");
	scanf("%s",str2);
	
	char* x = mystrstr(str1,str2);
	
	if(x!=NULL)
		printf("Substring %s found",x);
	else
		printf("Not found");
	
}
char* mystrstr(char* ptr1, char* ptr2)
{	
	int i = 0;
	while(ptr1[i]!='\0')
	{
		int j = 0;
		while(ptr1[i+j]==ptr2[j])
		{
			if(ptr2[j+1]=='\0')
				return &ptr1[i];
			
			j++;
	 }
		i++;
	}

	return NULL;
}