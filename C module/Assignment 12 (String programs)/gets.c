//WAP to Take in a String and Replace Every Blank Space with special symbol.

char* ReplaceSpace(char*);
void main()
{
	char str[20];
	printf("Enter string : ");
	gets(str);
	
	ReplaceSpace(str);
	
	printf("\n%s",str);
}
char* ReplaceSpace(char* ptr)
{
	int i=0;
	while(ptr[i]!='\0')
	{
		if(ptr[i]==' ')
			ptr[i] = '$';
		i++;
	}
	
	return ptr;
}