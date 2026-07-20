int mystrcasecmp(char*, char*);
void main()
{
	char str1[] = "devendra";
	char str2[] = "DEVENDRA";
	
	int x = mystrcasecmp(str1,str2);
	
	if(x==1)
		printf("Strings are same");
	else
		printf("Strings are not same");
}
int mystrcasecmp(char* ptr1, char* ptr2)
{
	int i=0;
	while(ptr1[i]!='\0' && ptr2[i]!='\0')
	{
		if(ptr1[i]>='A' && ptr1[i]<='Z')
			ptr1[i] = ptr1[i]+32;
			
		if(ptr2[i]>='A' && ptr2[i]<='Z')
			ptr2[i] = ptr2[i]+32;
			
			if(ptr1[i]!=ptr2[i])
				return 0;
		i++;
	}
	
	if(ptr1[i]=='\0' && ptr2[i]=='\0')
		return 1;
		
	return 0;
}