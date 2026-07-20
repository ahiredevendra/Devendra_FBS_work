char* mystrcat(char*, char*);
void main()
{
	char str1[20] = "devendra";
	char str2[20] = "ahire";
	
	mystrcat(str1,str2);
	
	printf("%s",str1);
}
char* mystrcat(char* ptr1, char* ptr2)
{
	int i=0;
	while(ptr1[i]!='\0')
	{
		i++;
	}
	
	int j=0;
	while(ptr2[j]!='\0')
	{
	ptr1[i] = ptr2[j];
	
	j++;
	i++;
	}
	ptr1[i] = '\0';
	
	return ptr1;
}