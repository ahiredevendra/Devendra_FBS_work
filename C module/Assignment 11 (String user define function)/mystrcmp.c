int mystrcmp(char*, char*);
void main()
{
	char str1[] = "devendra";
	
	char str2[] = "devendaa";
	
	int x = mystrcmp(str1,str2);
	
	if(x==0)
		printf("Strings are equal");
	else
		printf("String are not equal");
}
int mystrcmp(char* str1, char* str2)
{
	int i=0;
	
	while(str1[i]!='\0' && str2[i]!='\0')
	{
		if(str1[i]!=str2[i])
			return 1;
		i++;
	}
	if(str1[i]==str2[i])
		return 0;
	else
		return 1;
	
}