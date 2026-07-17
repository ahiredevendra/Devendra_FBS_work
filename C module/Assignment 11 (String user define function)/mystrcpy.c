char* mystrcpy(char*, char*);
void main()
{
	int size;
	printf("Enter size of array : ");
	scanf("%d",&size);
	
	char str1[size];
	printf("Enter string : ");
	scanf("%s",str1);
	
	char str2[size];
	
	mystrcpy(str2,str1);
	
	printf("\n%s",str1);
	printf("\n%s",str2);
	
}
char* mystrcpy(char* dest, char* src)
{
	int i=0;
	
	while(src[i]!='\0')
	{
		dest[i] = src[i];
		i++;
	}
	
	dest[i] = '\0';
	
	return dest;
}