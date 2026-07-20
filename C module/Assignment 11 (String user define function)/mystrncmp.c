int mystrncmp(char*, char*, int);
void main()
{
	char str1[20];
	printf("Enter string 1 : ");
	scanf("%s",str1);
	
	char str2[20];
	printf("Enter string 2 : ");
	scanf("%s",str2);
	
	int n;
	printf("Enter how many characters you want to compare : ");
	scanf("%d",&n);
	
	int x = mystrncmp(str1,str2,n);
	
	if(x==0)
		printf("Strings are equal");
	else
		printf("String are not equal");
}
int mystrncmp(char* str1, char* str2, int n)
{
	int i;
	for(i=0; i<n; i++)
	{
		if(str1[i]!=str2[i])
			return 1;
	}
	
	return 0;
	
}